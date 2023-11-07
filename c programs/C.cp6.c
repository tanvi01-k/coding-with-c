#include<stdio.h>
void main()
{
    /*write a program to check whether the number is divisible by 5 and 11 or not*/
    int num;
    printf ("enter the number which is divisible by 5 and 11:");
    scanf("%d",&num);

    if(num%5==0){
        printf("the number is divisible by 5 ");
    }
   if(num%11==0){
        printf("the number is divisible by 11 ");
}

    else {
        printf("the number is not divisible by 5 and 11");
    }
    getch();
}
