#include<stdio.h>
#include<math.h>
int main()
{
double a,b,c,s,area;
printf("Enter a in cm:");
scanf("%lf",&a);
printf("Enter b in cm:");
scanf("%lf",&b);
printf("Enter c in cm:");
scanf("%lf",&c);
s=(a+b+c)/2;
area=sqrt(s*(s-a)*(s-b)*(s-c));
printf("\nArea of triangle using heron's formula is %lf in cm square",area);
}