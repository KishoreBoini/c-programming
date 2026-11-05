# Examplecode

**C source:** `c-programs/pointers/examplecode.c`

## C Source Code

```c
#include <stdio.h>
int main() {
int nums[] = {1, 2, 3, 4};
int *p = nums + 4;
printf("%d", *(p - 2));
}
```
