// Calculating simple interest
#include <stdio.h>

int main(){
    float p,r,t,si;
    printf("enter the principal : ");
    scanf("%f",&p);  // user will given the value.
    printf("enter the rate : ");
    scanf("%f",&r);
    printf("enter the time : ");
    scanf("%f",&t);
    si = (p*r*t)/100;

    printf("the simple interst is %f",si);

    return 0;
}