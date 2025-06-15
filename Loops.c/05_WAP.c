#include <stdio.h>

int main(){
    // sum of digite to given number;
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n != 0) {
        int Ld;
        Ld = n % 10;
        sum = sum + Ld;
        n = n / 10;
        }
        printf("Sum of digits of the number is: %d", sum);
        // sum += n % 10;
        // n /= 10;
        // }
        // printf("Sum of digits of %d is %d\n", n, sum);

    return 0;
}