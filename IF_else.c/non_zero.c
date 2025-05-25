#include <stdio.h>

int main(){
    if(1)
    {
        printf("this is executed\n");
    }
    if(2345)
    {
        printf("this if is also executed\n");
    }
    if(2.74)
    {
        printf("this if is also executed!\n");
    }
    if('c')
    {
        printf("this if is also executed\n");
    }
    if(0)
    {
        printf("I am zero , i am not executed\n");
    }
    return 0;
}