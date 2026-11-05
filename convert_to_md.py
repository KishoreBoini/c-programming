from pathlib import Path

source_dir = Path("c-programs")
output_dir = Path("markdown-programs")

converted = 0

for c_file in source_dir.rglob("*.c"):
    relative_path = c_file.relative_to(source_dir)
    md_file = output_dir / relative_path.with_suffix(".md")

    md_file.parent.mkdir(parents=True, exist_ok=True)

    code = c_file.read_text(encoding="utf-8")

    content = (
        f"# {c_file.stem}\n\n"
        f"**C source:** `c-programs/{relative_path.as_posix()}`\n\n"
        f"```c\n{code.rstrip()}\n```\n"
    )

    md_file.write_text(content, encoding="utf-8")
    converted += 1

print(f"Conversion complete: {converted} Markdown files created.")
