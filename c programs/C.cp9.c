#include<stdio.h> main()
void main()
{
    /*write a program to calculate ((a*b)*(a*b)*(a*b))*/
    int x,y,a,b,result;
    printf("enter the value of x:");
    scanf("%d",&x);

     printf("enter the value of y:");
    scanf("%d",&y);

    a=x;
    b=y;

  result=(a*a*a)+(b*b*b)+(3*a*a*b)+(3*a*b*b);
  printf("result=%d",result);


  getch();
}
