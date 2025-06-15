#include <stdio.h>

int main(){
    for(int k = 1;k<=10;k++){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    for(int i = 1; i<=n; i++){
        printf("%d\n",i);
    }
}
    return 0;
}