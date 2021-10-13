#include<stdio.h>
#include<conio.h>
int main()
{
int x[5]={10,1,9,11,46};
int y[5]={20,15,0,72,2};
int z[10];
int i,j,k,temp;
printf("\n First array\n");
for(i=0;i<=4;i++)
printf("%d\t",x[i]);
printf("\n second array\n");
for(i=0;i<=4;i++)
printf("%d\t",y[i]);
for(i=0;i<=3;i++)
{
for(j=i+1;j<=4;j++)
{
if(x[i]>x[j])
{
temp=x[i];
x[i]=x[j];
x[j]=temp;
}
if(y[i]>y[j])
{
temp=y[i];
y[i]=y[j];
y[j]=temp;
}
}
}
for(i=j=k=0;i<=9;)
{

if(x[j]<=y[k])
{

 z[i++]=x[j++];
 }
else

{
z[i++]=y[j++];
}

if(j==5||k==5)
break;
}
for( ; j<=4; )
z[i++]=x[j++];
for( ; k<=4; )
z[i++]=y[j++];
printf("\n Array after sorting\n");
for(i=0;i<=9;i++)
printf("%d\t",z[i]);
getch();
}

