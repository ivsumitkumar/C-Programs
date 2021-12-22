//06.c program to calculate shift and reduce using stack
#include"stdio.h"
#include"conio.h"
#include"math.h"
#include"stdlib.h"
#include"string.h"
int k, z=0,p,c=0,i=0,j=0;
char a[10],ac[20],stk[15],act[20];
void check();
int main(){
    puts("Grammar is E->E+E\nE->E*E\nE->(E)\n\nE->id");
    puts("Enter input string:");
    gets(a);
    c=strlen(a);
    strcpy(act,"SHIFT->");
    puts("Stack\tInput\tAction");
    for(k=0;i=0;j<c;k++;i++;j++){
        if(a[j]=='j' && a[j+1]=='d'){
            stk[i]=a[j];
            stk[i+1]=a[j+1];
            stk[i+1]='\0';
            a[j]=' ';
            a[j+1]=' ';
            printf("\n$%s\t%s$\t%sid",stk,a,act);
            check();
        }
        else
            stk[i]=a[j];
            stk[i+1]='\0';
            a[j]=' ';
            printf("\n$%s\t%s$\t%s Symbols",stk,a,act);
            check();
    }
    getch();
    return 0;
}
void check(){
    strcpy(ac,"Reduce to E");
    for(z=0;z<c;z++){
        if(stk[z]=='i' && stk[z+1]=='d'){
            stk[z]=='E';
            stk[z+1]='\0';
            printf("\n$%s\t%s$\t%s",stk,a,ac);
            j++;
        }
    }
    for(z=0;z<c;z++){
        if(stk[z]=='E'&&stk[z+1]=='+' && stk[z+2]=='E'){
            stk[z]='E';
            stk[z+1]='\0';
            stk[z+2]='\0';
            printf("\n$%s\t%s$\t%s",stk,a,ac);
            i=i-2;
        }
    }
    for(z=0;z<c;z++)
    if(stk[z]=='(' && stk[z+1]=='E' && stk[z+2]==')'){
        stk[z]='E';
        stk[z+1]='\0';
        stk[z+2]='\0';
        printf("\n$%s\t%s$\t%s",stk,a,ac);
        i=i-2;
    }
}