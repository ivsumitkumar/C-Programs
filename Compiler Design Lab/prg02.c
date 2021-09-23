//Program to check whether the given statement is a comment or not.

#include "stdio.h"
#include "string.h"
int main()
{
    char s[100];

    printf("Enter the statement: ");
    gets(s);
    int le = strlen(s);
    if (s[0] == '/' && s[1] == '/' || s[0] == '/' && s[1] == '*' && s[le - 1] == '/' && s[le - 2] == '*')
    {
        printf("\nIt's a Comment.");
    }
    else
        printf("\nIt's not a comment.");

    return 0;
}