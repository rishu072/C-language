#include <stdio.h>

int main(){
    int n;
    printf("Enter a num : ");
    scanf("%d",&n);

    if(n%5==0)
    {
        printf("that is divisible by 5... ");
    }else{
        printf("that is not divisible by 5...");
    }
    return 0;
}