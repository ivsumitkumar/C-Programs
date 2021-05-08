#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{

    int S=0,i,n;
    printf("Enter the number\n");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        S=S+pow(i,i);
    }
    printf("Sum=%d",S);
    getch();
}
