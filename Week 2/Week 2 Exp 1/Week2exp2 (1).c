#include<stdio.h>
int main()
{
float C,F;
printf("Enter temperature in celsius:");
scanf("%f",&C);
F=(9.0/5.0)*C+32;
printf("\n Temperature in Fahrenheit is %f",F);
printf("\n Enter temperature in Fahrenheit:");
scanf("%f",&F);
C=(5.0/9.0)*(F-32);
printf("\n Temperature in Celsius is %f",C);
}