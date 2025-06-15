#include <stdio.h>

int main()
{
    int a, b;
    printf("enter the base a : ");
    scanf("%d", &a);
    printf("enter the power b : ");
    scanf("%d", &b);

    int power = 1;
    for (int i = 1; i <= b; i++)
    {
        power = power * a; 
    }
    printf("%d raised the power of %d is %d", a, b, power);
    return 0;
}