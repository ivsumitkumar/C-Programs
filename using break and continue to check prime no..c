#include <stdio.h>
#include<math.h>
#include<stdalign.h>
#include<conio.h>
void main()
{
    int i,c=1,n;
    printf("Enter any no.\n");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        if(i==1 || i==n)
        {continue;}
        if(n%i==0)
        {
        c=0;
        printf("The no. is not Prime");
        break;
        }
    }
    if(c==1)
    printf("The no. is Prime");
    getch();
}
