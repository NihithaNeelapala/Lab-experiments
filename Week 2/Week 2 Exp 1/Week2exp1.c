#include<stdio.h>
int main()
{
int a,b,c,sum;
float avg;
printf("Enter a value:");
scanf("%d",&a);
printf("\nEnter b value:");
scanf("%d",&b);
printf("\n Enter c value:");
scanf("%d",&c);
sum=a+b+c;
printf("the sum of %d,%d and %d is %d",a,b,c,sum);
avg=(float)sum/3;
printf("\n The average is %f",avg);
}