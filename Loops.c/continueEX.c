// #include <stdio.h>

// int main(){
//     int skip = 5;
//     int i =0;
//     while (i<10)
//     {
//         if(i==skip){
//         i++;
//         continue;
//         }
//     }
//     printf("%d\n",i);
//     i++;
    
//     return 0;
// }

#include <stdio.h>

int main() {
    int skip = 5;
    int i = 0;
    while (i < 10) {
        if (i == skip) {
            i++;
            continue;
        }
        printf("%d\n", i);
        i++;
    }
    return 0;
}
