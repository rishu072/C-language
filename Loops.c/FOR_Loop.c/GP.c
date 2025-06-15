#include <stdio.h>

int main(){
    int n ;
    printf("Enter a number : ");
    scanf("%d",&n);
    //GP--> 1,2,4,8,16,............nth;
    // GP --> 3,12,48,.......nth;
    int a =3;
    for(int i=1;i<=n;i++)
    {
        printf("%d ",a);
        a = a*4 ;
    }
    return 0;
}