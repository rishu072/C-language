//student marks based on below.
    /* 90 - 100=> A
        80 - 90 => B
        70 - 80 => c
        60 - 70 => D
        50 - 60 => E
            < 50 => F*/
 #include <stdio.h>
 
 int main(){
    int marks;
    char grade;
    printf("Enter a marks : ");
    scanf("%d",&marks);
    if(marks<=90 && marks>=100)
    {
        grade = 'A';
    }
    else if(marks<=80 && marks>=90)
    {
        grade = 'B';
    }
    else if(marks<=70 && marks>=80)
    {
        grade = 'C';
    }
    else if(marks<=60 && marks>=70)
    {
        grade = 'D';
    }
   else if(marks<=50 && marks>=60)
    {
        grade = 'E';
    }
    else
    {
        grade = 'F';
    }
    return 0;
 }