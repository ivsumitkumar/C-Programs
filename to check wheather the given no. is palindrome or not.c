#include<conio.h>
#include<stdio.h>
void main()
{
    int n,r,rev,num;
    printf("Enter the number\n");
    scanf("%d",&n);
    num=n;
    while(n!=0)
    {
        r=n%10;
        rev=10*rev+r;
        n=n/10;
    }
    printf("%d",rev);
    if(rev==num)
        printf("The number is palindrome");
    else
        printf("The number is not Palindrome");
    getch();
}
