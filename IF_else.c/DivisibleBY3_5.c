#include <stdio.h>

int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

   // if(n%15==0)    // one find rule.
  // if(n%3==0 && n%5==0)  // logical and condition rule.

    
     if(n%3==0 || n%5==0) //logical or condition rule.
    {
        printf("That is divisible by 5 and 3.");
    }else{
        printf("That is not divisible by 5 and 3.");
    }
    return 0;
}