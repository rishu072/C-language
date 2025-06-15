#include <stdio.h>

int main(){
    float n;
    printf("Enter a number: ");
    scanf("%f", &n);

    // GP Series -->100,50,25
    float a = 100;
    for(int i = 1; i<=n;i++)
    {
        printf("%f\n ",a);
        a = a/2;
    }
    return 0;
}