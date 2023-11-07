#include<stdio.h> main()
int main()
{
    int x,y,a,b,result;
    printf("enter the value of x and y :");
    scanf("%d%d",&x,&y);

    a=x;
    b=y;

  result=(a*a)+(b*b)+(2*a*b);
  printf("result=%d",result);


  return 0;
}
