#include<stdio.h>
#include<math.h>
int main()
{
double u,a,t,d;
printf("Enter initial velocity u:");
scanf("%lf",&u);
printf("\nEnter acceleration a:");
scanf("%lf",&a);
printf("\nEnter time t:");
scanf("%lf",&t);
d=u*t+(0.5*a*t*t);
printf("\nThe distance travelled by object is %lf",d);
}