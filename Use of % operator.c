#include<stdio.h>
#include<conio.h>
void main()
{
int a=20,b;
int c; float d;
printf("Enter the divider:");
scanf("%d",&b);
d=(float)a/(float)b;
c=a%b;
printf("Ans is %f\n",d);
printf("Ans is %d",c);
getch();
}
