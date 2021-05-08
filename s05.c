#include <stdio.h>
void main()
{
    int roll, marks;
    float amount;
    char g;
    printf("enter the sex of student f/m: \n");
    scanf("%c",&g);
    printf("enter the roll number and marks: \n");
    scanf("%d%d",&roll,&marks);
    if (g=='f' && marks>74)
    {
        amount=75*marks;
        //printf("amount=%f",amount);

    }
    else if(marks>85)
    {
        amount=75*marks;
        //printf("amount=%f",amount);

    }
    else
        {
            printf("student is not eligible for scholarship:\n");
        }
    printf("amount=%f",amount);
    getch();
}
