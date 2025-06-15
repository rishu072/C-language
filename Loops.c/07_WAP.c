#include <stdio.h>
// sum of the series,
int main(){
    int n;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    int sum = 0;
     
    if(n%2==0)
    {
        sum = -n/2;
    }
    else
    {
        sum = -n/2 + n;
    }
    // for (int i = 1; i <=n; i++)
    // {
    //      if (i % 2 != 0)
    //         sum += i;  // Add if odd
    //     else
    //         sum -= i;  // Subtract if even
    // }
    printf("Sum of the series = %d", sum);
    return 0;
}