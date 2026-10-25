#include<stdio.h>
#include<math.h>
int main()
{
double a,sq;
printf("Enter a value:");
scanf("%lf",&a);
sq=sqrt(a);
printf("\n The square root of %.2lf is %.2lf",a,sq);
}