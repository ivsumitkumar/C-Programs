#include<conio.h>
#include<stdio.h>
int main()
{
int a=0,b=1,c=1;
//int sum=2,i=3;
printf("%d\n",a);
printf("%d\n",b);
printf("%d\n",c);
/*printf("%d\n%d\n%d\n",a,b,c);*/
while(c<100)
{
a=b;
b=c;
c=a+b;
if (c<100)
	printf("%d\n",c);
}
//if (c<100)
// {
// sum=sum+c;
// printf("%d\n",c);
// i++;
// }
// }
// printf("count of Fibonacci numbers=%d\n",i);
// printf("Addition=%d",sum);
getch();
}
