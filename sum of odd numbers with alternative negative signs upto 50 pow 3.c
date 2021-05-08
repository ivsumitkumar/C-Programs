#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    long sum=0; int /*n,*/i=1,c=1,b,a,x=1;
    /*printf("Enter the number\n");
    scanf("%d",&n);*/
    /*for(i=1; i<=n; i+=2)*/
    while(c<=50)
    {
        a=pow(i,3);
        b=pow(-1,x);
        sum=sum+a*b;
        x++; i+=2;
        c++;
    }
    printf("%ld",sum);
    getch();
}
