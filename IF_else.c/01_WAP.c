#include <stdio.h>

int main(){
    
    int age;
    printf("Enter your age : ");
    scanf("%d",&age);
    if (age>60)
    {
        printf("you can drive and you are a senior citizon\n");
    }
    else if(age>40)
    {
        printf("you can drive and you are a elder\n ");
    }
    else if(age>18)
    {
        printf("you can drive\n");
    }
    else
    {
        printf("you cannot drive\n");
    }
    return 0;
}