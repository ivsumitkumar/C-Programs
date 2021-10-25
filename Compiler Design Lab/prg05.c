//C program to check syntax of if and while
#include"conio.h"
#include"stdio.h"
#include"string.h"
#include"ctype.h"

char s[15];
int isoperator (char ch, int len){
    char op[4]={'<','>','=','!'};
    for(int i=0; i<4; i++){
        if(ch==op[i])
        return 1;
    }
    return 0;
}
int check_if(){
    int l=strlen(s);
    if(l==7){
        if(s[0]=='i' && s[1]=='f' && s[2]=='(' && isalnum(s[3]) && isoperator(s[4],l) && isalnum(s[5]) && s[6]==')'){
            return 1;}
    }
    else if(l==8){
        if(s[0]=='i' && s[1]=='f' && s[2]=='(' && isalnum(s[3]) && isoperator(s[4],l) && isoperator(s[5]) && isalnum(s[6]) && s[7]==')')
            return 1;
    }
    else
        return 0;
}
int check_while(){
    int l=strlen(s);
    if(l==10){
        if(s[0]=='w' && s[1]=='h' && s[2]=='i' && s[3]=='l' && s[4]=='e' && s[5]=='(' && isalnum(s[6]) && isoperator(s[7]) && isalnum(s[8]) && s[9]==')')
            return 1;
    }
    else if(l==11){
        if(s[0]=='w' && s[1]=='h' && s[2]=='i' && s[3]=='l' && s[4]=='e' && s[5]=='(' && isalnum(s[6]) && isoperator(s[7]) && isoperator(s[8]) && isalnum(s[9]) && s[10]==')')
            return 1;
    }
    else
        return 0;
}
void main(){
    printf("Enter the statement: ");
    gets(s);
    if(check_if(s))
        printf("\nCorrect if statement.");
    else if(check_while)
        printf("\nCorrect while statement.");
    else
        printf("\nSyntax Error.");
    getch();
    
}