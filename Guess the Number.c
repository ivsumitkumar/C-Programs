#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int r,x,i=0;
    int u,l;
    printf("***Guess The Correct Number***\n");
    printf("Enter upper limit: ");
    scanf("%d", &u);
    printf("Enter lower limit: ");
    scanf("%d", &l);
    r= (rand()%(u-l+1))+l;
    /*r= rand()%100;*/
    printf("Enter the number:");
    while(i==0)
    {
        scanf("%d", &x);
        if (x==r)
        {
            printf("Congrats! You've guessed the Number");
            //i++;
            break;
        }
        else if (x<r)
        {
            printf("Uho! Try to think bigger:\n");
        }
        else
        {
            printf("Uho! just think a little smaller:\n");
        }
    }
    getch();
}
