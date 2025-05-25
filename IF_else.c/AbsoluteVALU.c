#include <stdio.h>

int main(){
    int a;
    printf("Enter a value of a : ");
    scanf("%d",&a);

    if (a<0) //If a is negative...
        a = a * (-1);
    {
        printf("the absolute value is : %d",a);
    }
    return 0;
}