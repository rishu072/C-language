#include <stdio.h>

int main(){
    int A,B,C;
    printf("Enter a value of A : ");
    scanf("%d",&A);
    printf("Enter a value of B : ");
    scanf("%d",&B);
    printf("Enter a value of C : ");
    scanf("%d",&C);

    if((A+B)>C && (B+C)>A && (C+A)>B)
    {
        printf("Valid triangle.");
    }else{
        printf("Invalid triangle.");
    }
    return 0;
}