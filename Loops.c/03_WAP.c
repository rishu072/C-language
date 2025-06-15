// WAP to table
#include <stdio.h>

int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(int j = 1; j<=n;j++)
    {
    for(int i = 1;i<=10;i++)
    {
        printf("%d x %d = %d\n",j,i,i*j);
        if(i==10)
        {
        
            printf("-------------------------\n");
        }
    }   
}
    return 0;
}