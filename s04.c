#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    int a;
    scanf("%d",&a);
    if(a<0)
        printf("a is negative");
    else if(a>0)
        printf("a is positive");
    else
        printf("neutral");
    getch();

}
