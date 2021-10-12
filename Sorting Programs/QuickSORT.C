#include<stdio.h>
#include<conio.h>
int split(int *,int,int);
void main()
{
int a[10],n,i;
clrscr();
printf ("Enter the size");
scanf("%d",&n);
printf("\n enter the elements:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
quick(a,0,n-1);
printf("\n the sorted array is:");
for(i=0;i<n;i++)
printf(" %d",a[i]);
getch();
}

quick(int a[],int low,int up)
{
 int i;
 if(up>low)
 {
 i=split(a,low,up);
 quick(a,low,i-1);
 quick(a,i+1,up);
 }
}



int split(int a[],int low,int up)
{
int i,x,y,t;
x=low+1;
y=up;
i=a[low];
while(y>=x)
{
while(a[x]<i)
	x++;
     while(a[y]>i)
	y--;
     if(y>x)
     {
     t=a[x];
     a[x]=a[y];
     a[y]=t;
     }
}
t=a[low];
a[low]=a[y];
a[y]=t;
return y;
}





