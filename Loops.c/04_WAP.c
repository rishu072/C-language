#include <stdio.h>

int main(){
    // count the digit of a given number
    int n, count = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0) {
        n = n / 10;
        count++;
        }
        printf("Number of digits: %d", count);
    return 0;
}