#include<stdio.h>
#include<conio.h>

int prime(int x)
{
    int c=1,i;
    for(i=2; i<x; i++)
    {
        if(x%i==0)
        {
           c=0;
           return 0;
           break;

        }
    }
    if(c==1)
    return 1;
}
void main()
{
    int n,i;
    printf("Enter a number to check:");
    scanf("%d",&n);
    if(prime(n))
        printf("%d is Prime number.",n);
    else
        printf("%d is not a prime number.",n);
    getch();
}
