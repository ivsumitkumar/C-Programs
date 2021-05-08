#include<stdio.h>
main()
{
int a,b,c;
printf("Enter Two Numbers");
scanf("%d%d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("a=%d b=%d",a,b);
return 0;
}
