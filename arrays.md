## Decimaltobinary

```c
//Program for decimaltobinary.c
#include<stdio.h>

int main(){
	int arr[16];
	int n,i=0;
	printf("Enter a decimal number : ");
	scanf("%d",&n);
	for ( ;n>0;i++)
	{
		arr[i]=n%2;
		n/=2;

	}
	for (int j=i-1;j>=0;j--)
	{
		printf("%d ",arr[j]);
	}
	printf("\n");




return 0;
}

```

## Sortdecending

```c
//Program for sortdecending.c
#include<stdio.h>

int main(){
	int arr[10]={5,8,9,2,3,4,5,3,7,9};
	int n=(sizeof(arr))/sizeof arr[0];
	for (int i=0;i<n;i++){
		for (int j=i+1;j<n;j++){
			if (arr[i]<arr[j]){
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
			
			
		}	
	}
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);

	}
	printf("\n");
return 0;
}

```

## Largestnum

```c
//Program for largestnum.c
#include<stdio.h>

int main(){
	int n,temp;
	printf("Enter the array size : ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the arry elements : ");
	for (int i=0; i<n; i++){
		scanf("%d",&arr[i]);

	}
	//int arr[5]={1,5,7,9,2};
	temp=arr[0];
	for (int i=0; i<n; i++){
		if (arr[i]>temp){
			temp=arr[i];			
		}	
	
	}
	printf("%d\n",temp);
return 0;
}

```

## Palindromedecbi

```c
//Program for palindromedecbi.c
#include <stdio.h>
#include <math.h>
   
int main()
{
          int num,rem,i=0,rem1,rev=1;
          int bin[16];
          printf("Enter the Number : ");
          scanf("%d",&num);
          int og=num;
          while(num>0)
       	  {
                  rem=num%2;
                  bin[i]=rem;
                  num/=2;
                  i++;
                  
           }
	   for(int j=i-1;j>=0;j--)
	   {
		   printf("%d",bin[j]);
	   }
           printf("\n");
	   num=og;  
           while(num>0)
           {
                  rem1=num%10;
                  rev=rev*10+rem1;                
              	  num/=10;
 
           }
         if(og==rev)
         {
                  printf("palindrome in decimal system \n");
 
          }
          else
	  {
                  printf("not a palindrome in decimal system \n");
          }
	  printf("rev =%d\n",rev);
         
	  int flag=0; 
	  for(int j=0,p=i-1;j<p;j++,p--)
	  {       if(bin[j]!=bin[p])
                   {
                           flag=1;
                           break;
  
                   }
  
 
          }
	/* int k=i-1;
	   for(int j=0;j<i;j++)
	 {
		 if(bin[j]!=bin[k])
		 {
			 flag=1;
			 break;

		 }
		 k--;


	 }*/
           if(flag)
                  printf("not a plaindrome in binary system\n");
 
          else
                  printf("palindrome in binary system \n");
  
 
return 0;
}
                                                               

```

## Secondlargestelement

```c
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

```

## Linearsearch

```c
//Program for linearsearch.c
#include<stdio.h>
int linearsearch(int arr[],int elmt,i int n )
{
	int temp;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==elmt)
		{
			return i;
		}

	}
}

int main()
{
	int arr[]={1,2,35,4,5,6,7,89,10,2};
	int r,element=89;
	r=linearsearch(arr[],element,10);
	printf("The element is %d\n",r);
return 0;
}

```

## Sortarray

```c
//Program for sortarray.c
#include<stdio.h>

int main(){
	int arr[10]={2,8,2,0,1,7,9,1,2,3};
	int n=sizeof(arr)/sizeof(arr[0]);
	for (int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if (arr[i]>arr[j]){
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");


return 0;
}

```

## Frequencyofelementsinarr

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

## Numofwordsinstr

```c
//Program for NumofWordsinstr.c
#include<stdio.h>
int astrlen(char *ptr);


int main(){
	char arr[20];
	printf("Enter the string : ");
	scanf("%s",arr);
	char *aptr=arr;
	int length = astrlen(aptr);
	printf("The length of the given string is : %d\n",length);
	
return 0;
}
int astrlen(char *ptr){
	int count =0;
	while(*ptr!='\0'){
		count++;
		ptr++;
	}
return count ;

}

```

## Equalarrornot

```c
//Program for equalarrornot.c
#include<stdio.h>

int main()
{
	int arr1[10]={1,2,3,4,5,6,7,8,9,10};
	int arr2[10]={1,2,3,4,5,6,7,8,9,10};
	for(int i=0;i<10;i++)
	{
		if(arr1[i]!=arr2[i])
		{
			printf("arrys are not equal \n");
			return 0;
		}
	}
	printf("arrays are equal\n");

return 0;
}

```

## Nospecialchar

```c
//Program for nospecialchar.c
#include<stdio.h>
#include<string.h>

int main()
{
	char str[]="srinivas2003@gmail.com";
	int len=strlen(str);
	for (int i=0;i<len;i++)
	{
		if (str[i]>= '!'&&'@'<=str[i])
		{
			str[i]=str[i+1];

		}
		i--;


	}
	printf("%s",str);
return 0;
}

```

## Concacatestrings

```c
//Program for concacateStrings.c
#include<stdio.h>
#include<string.h>

char* astrcat(char *dest,char *src);

int main(){
	char *res;
	char arr1[10];
	printf("Enter 1st the srting :");
	scanf("%s",arr1);
	char arr2[10];
	printf("Enter 2nd the srting :");
	scanf("%s",arr2);
	res=astrcat(arr1,arr2);
	printf("%s\n",res);

	
}

char* astrcat(char *dest,char *src){
	char *d=dest;
	while(*dest!='\0'){
		dest++;
	}
	while(*dest=*src){
		dest++;
		src++;
	}
	return d;

}




```

## Reversearray

```c
//Program for reversearray.c
#include<stdio.h>

int main(){
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int temp,i,j;
	for (i=0,j=9;i<j;i++,j--)
	{
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;		
		
	}
	for (i=0;i<10;i++){
	printf("%d ",arr[i]);
	
	}
	printf("\n");

return 0;

}

```

## Vowelsinstring

```c
//Program for vowelsinString.c
#include<stdio.h>
#include<string.h>


int main(){
	char arr[20];
	printf("Enter the string : ");
	scanf("%s",arr);
	//char arr[10]="kishore";
	int sum=0;
	for (int i=0;i<strlen(arr);i++){
		if (arr[i] == 'a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u'||arr[i]=='A'||arr[i]=='E'||arr[i]=='I'||arr[i]=='O'||arr[i]=='U')
			sum++;
	}
	printf("%d\n",sum);


return 0;
}

```

## Stringpalindrome

```c
//Program for stringPalindrome.c
#include<stdio.h>
#include<string.h>

int main(){
	char arr[10];
	printf("Enter the string :");
	scanf("%s",arr);
	int flag=0 ;
	int length=strlen(arr);
	for (int i=0,j=length-1;i<length/2;i++,j--){
		if (arr[i]!=arr[j]){
			flag=1;
			break;
		}
	}
	if(flag==0){
		printf("palindrome\n");

	}
	else
		printf("not a palindrome\n");

	
return 0;
}

```

## Stringtouppercase

```c
//Program for stringtouppercase.c
#include<stdio.h>

int main(){
	char cval;
	char arr[10];
	printf("Enter the string :");
	scanf("%s",arr);
	int i=0;
	while(arr[i]!='\0'){
		cval=arr[i];
		switch(cval){
			case 'a':arr[i]='A';
				 break;
			case 'b':arr[i]='B';
				 break;
			case 'c':arr[i]='C';
				 break;
			case 'd':arr[i]='D';
				 break;
			case 'e':arr[i]='E';
				 break;
			case 'f':arr[i]='F';
				 break;
			case 'g':arr[i]='G';
				 break;
			case 'h':arr[i]='H';
				 break;
			case 'i':arr[i]='I';
				 break;
			case 'j':arr[i]='J';
				 break;
			case 'k':arr[i]='K';
				 break;
			case 'l':arr[i]='L';
				 break;
			case 'm':arr[i]='M';
				 break;
			case 'n':arr[i]='N';
				 break;
			case 'o':arr[i]='O';
				 break;
		        case 'p':arr[i]='P';
				 break;
			case 'q':arr[i]='Q';
				 break;
			case 'r':arr[i]='R';
				 break;
			case 's':arr[i]='S';
				 break;
			case 't':arr[i]='T';
				 break;
			case 'u':arr[i]='U';
				 break;
			case 'v':arr[i]='V';
				 break;
			case 'w':arr[i]='W';
				 break;
			case 'x':arr[i]='Y';
				 break;
			case 'y':arr[i]='X';
				 break;
			case 'z':arr[i]='Z';
				 break;
			default : printf("error\n");
	

		}
		i++;
		
		
	}
	
	printf("%s\n",arr);


return 0;
}

```

## Unsaduplicateelements

```c
//Program for unsaduplicateElements.c
#include<stdio.h>

int main(){
	int arr[10]={1,5,7,1,5,2,3,1,2,3};
	int j=0,n;
	n=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if (arr[i]==arr[j]){
				for(int k=j;k<n;k++){
					arr[k]=arr[k+1];
				}
				n--;
				j--;

				}
				
			}
		}
	
	for (int i=0;i<j;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");


return 0;
}

```

## Majoritynarray

```c
//Program for majoritynarray.c
#include<stdio.h>

int main()
{
	int precount=0,element;
	int arr[10]={5,9,3,1,2,6,7,4,1,8};
	int temp[10];
	for(int i=0;i<10;i++)
	{
		temp[i]=0;
	}
	for(int i=0;i<10;i++)
	{
		if(temp[i]==0)
		{
			int count =0;
			for(int j=0;j<10;j++)
			{
				if(arr[i]==arr[j])
				{
					temp[i]=1;
					count++;
				}
				
			}
			if(precount<count)
			{
				precount=count;
				element=arr[i];
			}
		}
		
				
	}
	printf("the majority element in the array is : %d repeated %d times \n",element,precount);


return 0;
}

```

## Stringlength

```c
//Program for stringLength.c
#include<stdio.h>

int lengthstring(char* str);

int main(){
int length;
	char arr[10];
	printf("Enter the string : ");
	scanf("%s",arr);
	length=lengthstring(arr);
	printf("The length of the given string is : %d\n",length);

return 0;
}
int lengthstring(char* str){
	int count =0 ;
	
	for (  ;*str!='\0';str++){
		count++;
	}
return count ;


}

```

## Secondlargestnuminarr

```c
//Program for secondlargestnuminarr.c
#include<stdio.h>
int SecondLargestnuminArray(int *arr );

int main(){
	int arr[10];
	int i=0,res;
	while(i<10){
	printf("Enter the array elements :");
	scanf("%d",&arr[i]);
	i++;
	}
	printf("The 2nd largest Num is :%d\n",res=SecondLargestnuminArray(arr));

	
return 0;
}
int SecondLargestnuminArray(int *arr ){
	int max=arr[0],max2;

	for(int i=0;i<10;i++){
		max=max2;
		if (arr[i]>arr[i+1]){
			max=arr[i];
			
		}
	}
		
return max2;
}}

```

## Unionofarrays

```c
//Program for unionofarrays.c
#include<stdio.h>

int main()
{
	int arrA[5]={1,2,3,4,5};
	int arrB[5]={4,5,6,7,8};
	int res[5],bres[5],inter[5];

	int n=sizeof(arrA)/sizeof(arrA[0]);
	int k=0,l=0,m=0;
	for(int i=0;i<n;i++)
	{
		int count=0,c=0;
		for(int j=0;j<n;j++)
		{
			if(arrA[i]==arrB[j])
			{
				count++;
			}
			if(arrB[i]==arrA[j])
			{
				c++;

			}
			if(arrA[i]==arrB[j])
			{
				inter[m++]=arrA[i];

			}

		}
		if(count==0)
			res[k++]=arrA[i];
		if(c==0)
			bres[l++]=arrB[i];

	}
	printf("A union B\n");
	for(int i=0;i<k;i++)
	{
		printf("%d ",res[i]);

	}
	printf("\n");
	printf("B union A\n");
	for(int i=0;i<l;i++)
	{
		printf("%d ",bres[i]);

	}
	printf("\n");
	printf("A intersection B\n");
	for(int i=0;i<m;i++)
	{
		printf("%d ",inter[i]);

	}
	printf("\n");

return 0;
}

```

## Diffinarrays

```c
//Program for diffinarrays.c
#include<stdio.h>

int main()
{
	int arr1[10]={1,2,3,4,5,6,7,8,9,10};
	int arr2[10]={5,6,1,2,4,9,10,4,7,8};
	int diff[10];
	printf("The difference b/w the 2 arrays is : ");
	for(int i=0;i<10;i++)
	{
		diff[i]=arr1[i]-arr2[i];
		printf("%d ",diff[i]);
	}
	printf("\n");

return 0;
}

```

## Missingnumberton

```c
//Program for missingnumberton.c
#include<stdio.h>

int main()
{
	int res,flag=0,Nsum=0,n,Asum=0;
	int arr[10];
	printf("Enter the no of natural numbers : ");
	scanf("%d",&n);
	printf("Enter the array elements :");
	for(int i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	//int arr[10]={1,2,3,5,6,7,8,9,10,11};	
	Nsum=n*(n+1)/2;
	//printf("%d\n",Nsum);
	for(int i=0;i<10;i++)
	{
		Asum+=arr[i];
	}
	res=Nsum-Asum;
	if(Asum==Nsum)
	{
		printf("No missing number!\n");
		return 0;
	}
	
	else
		printf("The missing number is : %d\n",res);
		
return 0;
}

```

## Duplicateelements

```c
//Program for duplicateElements.c
#include<stdio.h>

int main(){
	int temp,k=0,check,l=0;
	int arr[10]={1,1,2,3,4,5,6,6,7,8};
	int j=0;
	for (int i=0;i<10;i++){
		if (arr[i]!=arr[j])
		j++;
		int temp=arr[j];
		arr[j]=arr[i];
		arr[i]=temp;
	}
	for(int i=0;i<j;i++){
		printf("%d",arr[i]);
	}
	printf("\n");

return 0;
}

```

## Sumofarray

```c
//Program for sumofArray.c
#include<stdio.h>

int main(){
	int a,i=0;
	printf("Enetr the size of the array :");
	scanf("%d",&a);
	int arr[a];
	printf("Enter the elements of the array :");
	while (i<a){
		scanf("%d",&arr[i]);
		i++;
	}

	
	//int arr[5]={1,2,3,4,5};
	int sum=0;
	i=0;
	
	while (i<a){
		sum+=arr[i];
		i++;
	}
	printf("%d\n",sum);

return 0;
}

```

## Identitymatrixornot

```c
//Program for identitymatrixornot.c
#include<stdio.h>

int main()
{
	int arr[3][3]={{1,0,0},{0,1,0},{0,0,1}};
	int flag=0;
	for (int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
				if (i==j)
				{
					if(arr[i][j]!=1)
					{
						flag=1;
						break;
					}
					
				}
				else
				{
					if (arr[i][j]!=0)
					{
						flag=1;
						break;
					}
				}
		

		}
		
	}
	if (flag)
		printf("not a identity matrix\n");
	else
		printf("identity matrix\n");


return 0;
}

```

