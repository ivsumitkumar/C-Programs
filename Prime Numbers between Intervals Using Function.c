#include <stdio.h>
#include<math.h>
#include<conio.h>
int prime(int x)
{
    int i,c=1;
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
int main()
{
    int i,l,v;
    printf("Enter the lower and upper limit");
    scanf("%d%d",&l,&v);
    if(v<=1)
        printf("None");
    else
    {
        l=2;
        printf("Prime Numbers are:\n");
        for(i=l; i<=v; i++)
        {
            if (prime(i))
            printf("%d\n",i);
        }
    }
    getch();
}
