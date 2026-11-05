//Program for secondlargestelement.c
#include<stdio.h>
int SecondLargestnuminArray(int *arr );

int main(){
	int arr[10]={12,15,6,7,8,90,12,13,17,10};
	int i=0,res;
	printf("Enter the array elements :");
	scanf("%d",&arr[i]);
	printf("The 2nd largest Num is :%d\n",res=SecondLargestnuminArray(arr));

	
return 0;
}
int SecondLargestnuminArray(int *arr ){
	int max=arr[0],max2=arr[0];
	for(int i=0;i<10;i++){		
		if (arr[i]>max){
			max=arr[i];					
		}
	}
	for(int i=0;i<10;i++){
		if(max2<arr[i]&&max!=arr[i]){
			max2=arr[i];
		}
	}
	
		
return max2;
}
