#include<stdio.h>
int main()
{
int a,b,c,d,max,min;
printf("Enter the numbers:");
scanf("%d%d%d%d",&a,&b,&c,&d);
max=min=a;
if (b>max)
   max=b;
else if (b<max)
   min=b;
if (c>max)
   max=c;
else if (c<max)
   min=c;
if (d>max)
   max=d;
else if (c<max)
   min=d;
printf("\nMaximum is %d",max);
printf("\nMinimum is %d",min);            
}