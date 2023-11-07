#include <stdio.h>
#include <stdlib.h>

void main()
{
    //WAP Linear Search
    int a[5]={10,20,15,18,29};
    int i,item,Loc;
    printf("enter item which want to search");
    scanf("%d",&item);

    for(i=0;i<5;i++)
    {
        if (a[i]==item)
        {
            Loc=i;
            break;
        }
    }
    if (i==5)
    {
        printf("enter item not found");
    }
    else
    {
        printf("item is found at Loc");
    }
}
