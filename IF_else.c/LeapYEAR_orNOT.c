#include <stdio.h>

int main(){
    int year;
    printf("Enter a year : ");
    scanf("%d",&year);
   // if ((year %4==0 && year%100!=0) || year%400==0)

    if(year%4==0)
    {
        printf("that is leap year..");
    }else{
        printf("that is not a leap year..");
    }
    return 0;
}