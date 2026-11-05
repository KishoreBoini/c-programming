# longest_plaindromic_substring

**C source:** `c-programs/leetcode/longest_plaindromic_substring.c`

```c
#include<stdio.h>
#include<string.h>

char* longestPalindrome(char* s) {
    static char lpsc[1001];
    int sLen;
    for(sLen=0;s[sLen]!='\0';sLen++);
    int Lcounte=1,Lcounto=1,sre=0,ende=0,sro=0,endo=0,l=0,j=0,k=0,Ccount=0;
	printf("Inside Function\n");

    for(int i=0;i<sLen-1;i++)
    {
	if(s[i]==s[i+1])
        {
            Ccount = 2;
             j=i+2,k=i-1;
             if(Ccount>Lcounte)
             {
                Lcounte=Ccount;
		sre = i;
    		ende = i + 1;
             }
		    printf("INside EVEN part : \n");
		    printf("%d %d\n",sre,ende);
        
            while(k>=0 && j<=sLen-1)
            {
                if(s[j]==s[k])
                {
                    Ccount=Ccount+2;            
                }
                else
                {
                    break;
                }
                if (Lcounte<Ccount)
                {
                    Lcounte=Ccount;
                    sre=k;ende=j; 
                }
		    printf("INside EVEN part : \n");
		    printf("%d %d\n",sre,ende);
            
            j++;
            k--;  
            } 
        }
        {
            Ccount=1;
            j=i+1,k=i-1;

            while(k>=0 && j<=sLen-1)
            {
                if(s[j]==s[k])
                {
                    Ccount=Ccount+2;            
                }
                else
                {
                    break;
                }
                if (Lcounto<Ccount)
                {
                    Lcounto=Ccount;
                    sro=k;endo=j;
                }
		    printf("INside ODD part : \n");
		    printf("%d %d\n",sro,endo);
            
            j++;
            k--;  
            } 
        }
    }
    int sr=0,end=0;
    if(Lcounte>Lcounto)
    {
	    sr=sre;
	    end=ende;
    }
    else{
	    sr=sro;
	    end=endo;
    }
    for(int i=sr;i<=end;i++)
    {
        lpsc[l++]=s[i];
    }
    lpsc[l]='\0';


    return lpsc; 
	
}


int main()
{
	char ch[]="xabccbaeezyzyz";
	printf("Inside Main\n");
	char* res=longestPalindrome(ch);
	printf("Function Called\n");
	printf("%s\n",res);

return 0;
}
```
