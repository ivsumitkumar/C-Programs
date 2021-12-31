#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c,d,result;
printf("enter first three number\n");
scanf("%d%d%d%d",&a,&b,&c,&d);
result=((a>b && a>c && a>d) ? a : (b>c && b>d) ? b : (c>d)? c : d );
printf("%d is greater",result);
getch();
}