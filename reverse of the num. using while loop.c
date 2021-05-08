#include<conio.h>
#include<stdio.h>
void main()
{
int x,r,rev=0;
printf("Enter the number\n");
scanf("%d",&x);
while(x!=0)
{
r=x%10;
rev=rev*10+r;
x=x/10;
}
printf("Reverse of the given number is= %d",rev);
getch();
}
