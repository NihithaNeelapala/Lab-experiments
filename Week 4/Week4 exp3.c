#include<stdio.h>
int main()
{
int a,b,c,d,e,total;
float avg;
printf("Enter subject marks:");
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
total=a+b+c+d+e;
printf("\nTotal marks=%d",total);
avg=(float)total/5.0;
printf("\nAverage is %.2f",avg);
}