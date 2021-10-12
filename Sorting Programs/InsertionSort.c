#include<stdio.h>
int main()
{
  int i,j,s,temp,a[20];
  clrscr();
  printf("\nEnter size of the array: ");
  scanf("%d",&s);
  printf("\nEnter %d elements in to the array:",s);
  for(i=0;i<s;i++)
      scanf("%d",&a[i]);
 
 for(i=1;i<s;i++)
{
      temp=a[i];
      j=i-1;
      while((temp<a[j])&&(j>=0))
     {
      a[j+1]=a[j];
          j=j-1;
      }
      a[j+1]=temp;
  }
  printf("\nAfter sorting the elements are: ");
  for(i=0;i<s;i++)
      printf(" %d",a[i]);
  return 0;
}