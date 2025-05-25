#include <stdio.h>

int main(){
    int x1,x2,x3;
    int y1,y2,y3;
    printf("Enter value of x1 : ");
    scanf("%d",&x1);
    printf("Enter value of x2 : ");
    scanf("%d",&x2);
    printf("Enter value of x3 : ");
    scanf("%d",&x3);
    printf("Enter value of y1 : ");
    scanf("%d",&y1);
    printf("Enter value of y2 : ");
    scanf("%d",&y2);
    printf("Enter value of y3 : ");
    scanf("%d",&y3);

    double M1 = (y2 - y1)/(x2 - x1);
    double M2 = (y3 - y2)/(x3 - x2);

    if(M1 == M2)
        printf("the point is a straight line.");
    else
        printf("the point is not a straight line.");
    
    return 0;
}