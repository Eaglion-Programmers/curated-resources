#include<stdio.h>
int main()
{
  int s,i,j,temp,a[20];
  printf("\nEnter size of the array :");
  scanf("%d",&s);

  printf("\nEnter %d elements in to the array:");
  for(i=0;i<s;i++)
      scanf("%d",&a[i]);
  
for(i=0;i<s;i++)
 {
      for(j=i+1;j<s;j++)
          {
           if(a[i]>a[j])
            {
               temp=a[i];
              a[i]=a[j];
              a[j]=temp;
           }
      }
  }
  printf("\nThe array after sorting is: ");
  for(i=0;i<s;i++)
      printf(" %d",a[i]);
  return 0;
}