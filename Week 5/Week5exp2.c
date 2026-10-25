#include<stdio.h>
int main()
{
int units;
float bill;
printf("Enter number of units:");
scanf("%d",&units);
if (units<=100)
   bill= 1.50*units;
else if (units<=200)
   bill= 2.50*units;
else if (units<=500)
   bill= 4.00*units;
else 
   bill= 6.00*units;
printf("\nTotal electricity bill is %.2f",bill);      
}