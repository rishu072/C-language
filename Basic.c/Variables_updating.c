#include <stdio.h>

int main(){
    // int b=5;
    // printf("b = %d\n", b);     // 5
    // printf("b-- = %d\n", b--); // 5 (uses b, then decrements)
    // printf("b = %d\n", b);     // 4
    // printf("--b = %d\n", --b); // 3 (decrements first, then uses)

    int x = 7;
    printf("%d\n",x);
    x= 7;  // normal variable.
    printf("%d\n",x);
    x = ++x;    // pre increment
     printf("%d\n",x);
    x = x++;    // post inceement
    printf("%d\n",x);
    x = --x;     //pre decrement  
    printf("%d\n",x);
    x = x--;  // post decrement.
    printf("%d\n",x);
    

    //i++ prints  i first and then increments (post)
    //++i increment i first and then prints (pre)
    return 0;
}