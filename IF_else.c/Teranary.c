#include <stdio.h>

int main(){
    
    int a ,b;
    printf("Enter a value of a : ");
    scanf("%d",&a);
    printf("Enter a value of b : ");
    scanf("%d",&b);

    //condition ? expression (if - true) : expression (if - false);
    a>b ? printf("A is grater") : printf("B is greater");
    return 0;
}