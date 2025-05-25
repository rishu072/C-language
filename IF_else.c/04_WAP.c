#include <stdio.h>

int main(){
    int x,y;
    printf("Enter the coordinates  : ");
    scanf("%d  %d",&x,&y);

    if(x==0 && y==0)
    {
        printf("the point is origin.");
    }
    else if (x==0)
    {
        printf("the line is y axis.");
    }
    else if (y==0)
    {
        printf("the line is x axis.");
    }
    else
    {
        printf("the poin dose not line on x or y axis.");
    }
    return 0;
}