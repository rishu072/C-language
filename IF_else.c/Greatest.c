#include <stdio.h>

int main(){
    int A,B,C,D;
    printf("Enter a value of A : ");
    scanf("%d",&A);
    printf("Enter a value of B : ");
    scanf("%d",&B);
    printf("Enter a value of C : ");
    scanf("%d",&C);
    printf("Enter a value of D : ");
    scanf("%d",&D);

    if(A>B && A>C && A>D)
    {
        printf("%d is greatest.",A);
    }
    if(B>A && B>C && B>D){
        printf("%d is greatest.",B);
    }
    if(C>A && C>B && C>D)
    {
        printf("%d is greatest.",C);
    }
    if(D>A && D>B && D>C){
        printf("%d is greatest.");
    }

    
    return 0;
}