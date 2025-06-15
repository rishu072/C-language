#include <stdio.h>

int main(){
    // n term febonacci number;
    int n;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    int a = 0;
    int b = 1;
    

    for (int i = 2; i<=n; i++)    
    {
        int sum = a + b;
        a = b;
        b = sum;
        printf("The %dth febonacci is : %d \n",i,sum);
        
    }
   //printf("The  %dth febonacci is : %d ",n,sum);
    return 0;
}
