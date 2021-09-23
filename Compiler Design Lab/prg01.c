//C program to accept all the strings starting 011(0+1)*

#include"stdio.h"
#include"string.h"
int main()
{
    char s[50];
    int flag=1,le, i;
    printf("Enter String: ");
    scanf("%s",&s);
    le = strlen(s);
    if(s[0]!='0' || s[1]!='1' || s[2]!='1'){
        flag=0;
    }
    if(flag==1){
        for(i=3; i<le; i++){
            if(s[i]!='0' && s[i]!='1'){
                flag=0;
                break;
            }
        }
    }
    if(flag==1){
        printf("String Accepted!!");
    }
    else{
        printf("String Not Accepted!!");
    }
    return 0;
}