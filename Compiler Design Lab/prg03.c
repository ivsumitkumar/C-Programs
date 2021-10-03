//WAP in c to check a valid identifier.
#include"stdio.h"
#include"conio.h"
#include"ctype.h"
#include"string.h"
void main()
{
    char vname[20], kwords[11][7]={"if","else","switch","main","void","for","while","int","char","include","float"};
    int le,flag=1,i;

    printf("Enter the identifier: ");
    gets(vname);
    le=strlen(vname);
    if(isdigit(vname[0])){
        printf("\nStarting with a number Not a valid identifier.");
        flag=0;
    }
    if(flag){
        for(i=0; i<le; i++){
            if(isalnum(vname[i])!= 1 && vname[i]=='_'){
                printf("\nSpecial Symbol found\nNot a valid identifier.");
                flag=0;
                break;
            }
        }
    }
    if(flag){
        for(i=0;i<11;i++){
            if(strcmp(kwords[i],vname)==0){
                printf("\nIt's a keyword.\nNot a valid Identifier.");
                flag=0;
                break;
            }
        }
    }
    if(flag)
    printf("\nIt's a valid Identifier.");
    getch();
}