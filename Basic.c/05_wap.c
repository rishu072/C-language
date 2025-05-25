/*Take two integers input, a and b : a>b, and find the remainder
 when a is dividend by b.*/
 #include <stdio.h>
 
 int main(){
    int a,b;
    printf("enter 1st no. : ");
    scanf("%d",&a);
    printf("enter 2nd no. : ");
    scanf("%d",&b);

    //Divisor * quatient + remainder = dividend..

    int q = (a/b);
    int r = a - (b*q);

    printf("%d",r);
    

    return 0;
 }
