#include<stdio.h>
#include<conio.h>

main()
{
 int a[20],i,n;
 clrscr();
 printf("Enter n:");
 scanf("%d",&n);

 printf("Enter array elements ");
 for(i=0;i<n;i++)
  scanf("%d",&a[i]);

 printf("\nArray before sorting\n");
 for(i=0;i<n;i++)
  printf("%d\t",a[i]);

  shellsort(a,n);

 printf("\nArray after sorting\n");
 for(i=0;i<n;i++)
  printf("%d\t",a[i]);
 getch();
 }

 shellsort(int a[],int n)
 {
 int t,exchg,gap,i;
 gap=n/2;
 do
 {
 do{
  exchg=0;
   for(i=0;i<n-gap;i++)
   {
    if(a[i]>a[i+gap])
    {
     t=a[i];
     a[i]=a[i+gap];
     a[i+gap]=t;
     exchg=1;
     }
    }
   }while(exchg);
  }while(gap=gap/2);
 }


