# Palindromedecbi

**C source:** `c-programs/controlstatements/arrays/palindromedecbi.c`

## C Source Code

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
