#include <stdio.h>

int main(){
    int CP,SP;
    printf("Enter a cost price : ");
    scanf("%d",&CP);
    printf("Enter a selling price : ");
    scanf("%d",&SP);

    if(SP>CP)
        printf("Profit");
    if(SP<CP)
        printf("Loss");
    if(SP==CP)
        printf("no profit no loss.");
    
    return 0;
}