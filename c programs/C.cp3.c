#include<stdio.h>
void main()
{
    /*calculate the number is even or odd*/
    int num;
    printf("enter the number");
    scanf("%d",&num);

    if(num%2==0){
        printf("the number is even");
    }
    else{
        printf("the number is odd");
    }
    getch();
}
