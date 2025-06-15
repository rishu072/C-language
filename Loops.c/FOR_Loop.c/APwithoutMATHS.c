#include <stdio.h>

int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    //AP 4,7,10,13,......nth;
    int a=4;
    for (int i =1;i<=n;i++)
    {
        printf("%d ",a);
        a = a+3;
    }
    return 0;
}