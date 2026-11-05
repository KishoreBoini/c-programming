from pathlib import Path
import re

source_dir = Path("c-programs")
output_dir = Path("markdown-programs")

converted = 0

for c_file in source_dir.rglob("*.c"):
    relative_path = c_file.relative_to(source_dir)
    md_file = output_dir / relative_path.with_suffix(".md")

    # Create a readable title from the filename
    title = re.sub(r"^\d+[\._-]*", "", c_file.stem)
    title = re.sub(r"[_-]+", " ", title)
    title = " ".join(title.split()).title()

    code = c_file.read_text(encoding="utf-8")

    content = (
        f"# {title}\n\n"
        f"**C source:** `c-programs/{relative_path.as_posix()}`\n\n"
        f"## C Source Code\n\n"
        f"```c\n{code.rstrip()}\n```\n"
    )

    md_file.parent.mkdir(parents=True, exist_ok=True)
    md_file.write_text(content, encoding="utf-8")
    converted += 1

print(f"Updated {converted} Markdown files.")
