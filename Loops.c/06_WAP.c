#include <stdio.h>

int main()
{
    // sum of all the even digits of a given number;
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n != 0)
    {
        int LD = n % 10;
        if (LD % 2 != 0)
        {
            sum = sum + LD;
        }
        n = n / 10;
    }
    printf("Sum of all the odd digits of the number is %d", sum);

   // printf("Sum of all even digits is: %d", sum);

    return 0;
}