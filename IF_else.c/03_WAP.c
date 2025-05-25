#include <stdio.h>

int main(){
    int l,b,a,p;
    printf("enter a langht :");
    scanf("%d",&l);
    printf("enter a branth :");
    scanf("%d",&b);
    
    a = l*b;
    p = 2*(l+b);

    if(a>p)
    {
        printf("Area is grtater then perimeter.");
    }
     if (a<p){
        printf("Area is not grtater then perimeter.");
    }
    if(a==p)
    {
        printf("Area and perimeter is equal.");
    }
    
    
    
    


    
    return 0;
}