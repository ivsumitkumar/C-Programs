#include<stdio.h>
#include<conio.h>
int fact(int x)
{
int y;
if(x==0)
return 1;
y=x*fact(x-1);
return y;
}
void main()
{
int m,n;
//clrscr();
printf("Enter the integer: ");
scanf("%d",&m);
n=fact(m);
printf("The facorial is: %d",n);
getch();
}
