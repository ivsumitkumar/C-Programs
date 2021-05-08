#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int c=1,i=1,sum=0;
    while(c<=100)
    {
        sum=sum+pow(i,3);
        i+=2;
        c+=1;
    }
    printf("Sum=%d",sum);
    getch();
}
