#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{

    long S=0;int i=1,c=1/*,n*/;
    /*printf("Enter the number\n");
    scanf("%d",&n);*/
    /*for(i=1; i<=n; i+=2)*/
    while(c<=100)
    {
        S=S+pow(i,4);
        /*printf("%d\n",S);*/
        i+=2; c++;
    }
    printf("Sum=%ld",S);
    getch();
}
