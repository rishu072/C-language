// WAP to table
#include <stdio.h>

int main(){
    for(int j = 1; j<=20;j++){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    
    for(int i = 1;i<=10;i++)
    {
        printf("%d x %d = %d\n",i,n,i*n);
    }
}
    return 0;
}