#include <stdio.h>

int main()
{
    // Factorial of a number
    for (int j = 1; j <= 10; j++)
    {
        int n;
        printf("\nEnter a number: ");
        scanf("%d", &n);

        int fact = 1;
        for (int i = 1; i <= n; i++)
        {
            fact = fact * i;
            printf("Factorial of %d! is %d\n", i, fact);
        }
    }

    return 0;
}