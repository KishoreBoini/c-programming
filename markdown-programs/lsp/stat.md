# Stat

**C source:** `c-programs/lsp/stat.c`

## C Source Code

```c
#include<stdio.h>
#include<fcntl.h>
#include<sys/ioctl.h>
#include <sys/stat.h>

void main()
{
	int fd;
	struct stat buf;
	stat("stat.c",&buf);
	printf("stat \nsize of the given files is %ld\n",buf.st_size);
	fd=open("file.txt",O_RDWR,0);
	fstat(fd,&buf);
	printf("fstat \nsize of the given files is %ld\n",buf.st_size);
	
}
```
