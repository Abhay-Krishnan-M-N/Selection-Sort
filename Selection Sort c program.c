#include <stdio.h>
int a[10],i,j,n,idx,temp;
int main()
 {
  printf("\nEnter number of elements:");
  scanf("%d",&n);
  printf("\nEnter %d elements:\n",n);
  for(i=0;i<n;i++)
   scanf("%d",&a[i]);
  idx=0;
  for(i=0;i<n-1;i++)
   {
    for(j=i+1;j<n;j++)
     {
      if(a[j]<a[idx])
       idx=j;
      temp=a[idx];
      a[idx]=a[i];
      a[i]=temp;
     }
   }
  printf("\nSelection Sort Completed !\n");
  for(i=0;i<n;i++)
   printf("%d ",a[i]);
    return 0;
 }
