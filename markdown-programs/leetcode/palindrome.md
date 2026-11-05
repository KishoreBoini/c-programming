# Palindrome

**C source:** `c-programs/leetcode/palindrome.c`

## C Source Code

```c
#include<stdio.h>
#include<stdbool.h>

bool isPalindrome(int x) {
   int mod=0,rev=0,or=0;
    or=x;
    while(x>0){
        mod=x%10;
        rev=rev*10+mod;
        x=x/10;
    }
    if(or==rev){
        return true;
    }
        else{
        return false;
        }
}
int main()
  {
          int x;
          printf("enter the Num : ");
          scanf("%d",&x);
          printf("%d\n",isPalindrome(x));
  }
```
