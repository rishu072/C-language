#include <stdio.h>

int main(){
    int n; 
    printf("Enter a number : ");
    scanf("%d",&n);

    //logical or(||) condition rule.
     
    // if(n%3==0 || n%5==0) {
    //     if(n%15!=0){
    //         printf("The number is not divisible by 3 and 5 but divisible by 15.");
    //  }
    //  else{
    //     printf("The number is divisible by 15");
    //  }
    
    // }else{
    //     printf("The number is not divisible by 3 or 15.");
    // }

    // && --> ||
    if((n%5==0 || n%3==0) && n%15!=0){
        printf("The number is not divisible by 3 and 5 but divisible by 15.");
    }else{
        printf("the number is not matching the condition.");
    }
    return 0;
}