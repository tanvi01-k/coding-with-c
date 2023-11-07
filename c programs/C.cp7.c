#include<stdio.h>
void main()
{
    /*calculate leap year or not*/
    int year;
    printf("enter the year");
    scanf("%d",&year);

    if(year%4==0)
    {
        printf("the year is leap year\n");
    }
    else{
        printf("the year is not a leap year\n");
    }
    getch();
}
