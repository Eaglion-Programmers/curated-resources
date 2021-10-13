#include<conio.h>
#include<stdio.h>
void main()
{
	int n,i,a[10],temp,j;
	clrscr();
	printf("\n enter the number of elements");
	scanf("%d",&n);
	printf("\n enter the elements of array");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}

	}
	printf("\n the sorted elements are");
	for(j=0;j<n;j++)
	printf("\n%d",a[j]);
	getch();
}