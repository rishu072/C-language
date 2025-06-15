#include <stdio.h>

int main(){
    // armstrong number
    int n, sum = 0, temp, num;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while (temp != 0) {
        int digit = temp % 10;
        sum = sum + digit * digit * digit;
        temp = temp / 10;
        }
        if (sum == num)
        printf("%d is an Armstrong number", num);
        else
        printf("%d is not an Armstrong number", num);

    return 0;
}