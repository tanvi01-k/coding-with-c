#include <stdio.h>
#include <stdlib.h>

void main()
{
    //WAP Binary Search
   int i,n,beg,end,mid,item,a[100];
   printf("enter no of element for array");
   scanf("%d",&n);
   printf("enter item of element for array");
   for(i=0;i<n;i++)
    scanf("%d",&a[i]);
   printf("enter the item you want to search");
   scanf("%d",&item);
   beg=0;
   end=n-1;
   mid=(beg+end)/2;

   while((beg<=end)&&(a[mid]!=item))
   {
       if(item<a[mid])
        end=mid-1;
   else
    beg=mid+1;
   mid=(beg+end)/2;
   }
   if(a[mid]==item)
    printf("item found at %d",mid);
   else
    printf("item is not found");
}

