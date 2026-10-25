#include<stdio.h>
#include<math.h>
int main()
{
double p,r,t,ci,amount;
printf("Enter principal amount:");
scanf("%lf",&p);
printf("Enter rate interest:");
scanf("%lf",&r);
printf("Enter time period:");
scanf("%lf",&t);
amount=p*((pow((1+r/100),t)));
ci=amount-p;
printf("\nthe compound interest is %lf",ci);
}