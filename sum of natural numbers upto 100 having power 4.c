#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    long int s=0,i,n=100;
    for(i=1; i<=n; i++)
    {
        s=s+pow(i,4);
    }
    printf("SUM=%ld",s);
    getch();
}
