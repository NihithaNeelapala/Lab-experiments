#include<stdio.h>
int main()
{
float p,r,t,si;
printf("Enter principal amount in rupees:");
scanf("%f",&p);
printf("\n Enter rate of interest:");
scanf("%f",&r);
printf("\n Enter time period in months:");
scanf("%f",&t);
si=(p*r*t)/100;
printf("the simple interest is %f",si);
}