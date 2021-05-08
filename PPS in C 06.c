#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
float a,b,c,s,A;
printf("Enter Three Sides");
scanf("%f%f%f",&a,&b,&c);
s=(a+b+c)/2;
A=sqrt(s*(s-a)*(s-b)*(s-c));
printf("Area is %f",A)
;getch();
}
