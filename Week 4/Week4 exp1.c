#include<stdio.h>
int main()
{
int A,B,C,D,E,F,G,J,i,r1,r2,r3,r4;
printf("Enter A,B,C,D,E,F,G,J:");
scanf("%d%d%d%d%d%d%d%d",&A,&B,&C,&D,&E,&F,&G,&J);
r1= A + B*C + (D*E) + F*G;
printf("Result=%d",r1);
r2= A/B*C - B + A*D/3;
printf("Result=%d",r2);
r3= A+++B---A;
printf("Result=%d",r3);
r4= J= (i++) + (++i);
printf("Result=%d",r4);
}