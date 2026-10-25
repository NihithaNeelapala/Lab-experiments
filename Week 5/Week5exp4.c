#include<stdio.h>
int main()
{
float a,b;
int choice;
printf("Enter two numbers:");
scanf("%f%f",&a,&b);
printf("\n 1.Addition");
printf("\n 2.Subtraction");
printf("\n 3.Multiplication");
printf("\n 4.Division");
printf("\n Enter your choice:");
scanf("%d",&choice);
switch (choice)
 { 
   case 1:
        printf("Result = %.2f",a+b);
        break;
   case 2:
        printf("Result = %.2f",a-b);
        break;
   case 3:
        printf("Result = %.2f",a*b);
        break;
   case 4:
        if (b == 0)
        {
           printf("Division by zero is not possible");
        }
        else
        {
           printf("Result = %.2f", a/b);
        }
        break;
   default:
        printf("Invalid option");  
 }             
  return 0;   
}