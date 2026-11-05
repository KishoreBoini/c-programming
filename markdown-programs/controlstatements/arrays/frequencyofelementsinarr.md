# frequencyofelementsinarr

**C source:** `c-programs/controlstatements/arrays/frequencyofelementsinarr.c`

```c
//Program for frequencyofelementsinarr.c
#include<stdio.h>

int main(){
	int arr[10]={1,2,6,8,1,3,2,7,3,1},temp[10];
	int count,i=0;
	int len=sizeof(arr)/sizeof(arr[0]);
	while(i<10)
		temp[i++]=0;
	for(int i=0;i<len;i++)
	{
		if(temp[i]==0){
				count=0;
				for(int j=0;j<len;j++)
				{
					if(arr[i]==arr[j])
					{
						count++;
						temp[j]=1;
					}
				}
				printf("num %d is repeted %d times in the Array \n",arr[i],count);
				}
	}

return 0;
}
```
