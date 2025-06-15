#include <stdio.h>

int main()
{
    int a, b;
    printf("enter the power a : ");
    scanf("%d", &a);
    printf("enter the num b : ");
    scanf("%d", &b);
    for (int j = 1; j <= b; j++)
    {
        int power = 1;
        for (int i = 1; i <= a; i++)
        {
            power = power * j;
        }
        printf("%d raised the power of %d is %d\n", j, a, power);
    }
    return 0;
}