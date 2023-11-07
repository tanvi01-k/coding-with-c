#include<stdio.h>
void main()
{
    /*calculate the largest number between two numbers*/
    int a,b;
    printf("calculate the largest number between a and b");
    scanf("%d%d",&a,&b);

    if(a>b){
        printf("the largest number is a");
    }
    else if(b>a){
        printf("the largest number is b");
    }
    else{
        printf("the number a is equal to number b");
    }
    getch();
}
