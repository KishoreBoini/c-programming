#include<stdio.h>
 
void main()
 {
         int arr[5]={1,2,3,4,5};
         int *ptr=arr;
         printf("Dereferenced pointer %d\n",(*ptr+3));

 }

