#include <stdio.h>

int main(){
    int Ram,Shyam,Ajay;
    printf("Ram age : ");
    scanf("%d",&Ram);
    printf("Shyam age : ");
    scanf("%d",&Shyam);
    printf("Ajay age : ");
    scanf("%d",&Ajay);

    if(Ram>Shyam && Ram>Ajay)
    {
        printf("Ram is youngerst.");
    }
    if(Shyam>Ram && Shyam>Ajay)
    {
        printf("Shyam is youngerst.");
    }
    if(Ajay>Ram && Ajay>Shyam)
    {
        printf("Ajay is youngerst.");
    }
    return 0;
}