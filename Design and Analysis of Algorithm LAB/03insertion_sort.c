//C program to implement insertion sort.
#include"stdio.h"
#include"conio.h"

void main(){
    int a[10]={10,9,8,7,6,5,4,3,2,1}, key,i,j;

    for(i=1; i<10; i++){
        key=a[i];
        j=i-1;
        while(j>=0 && a[j]>=key){
            a[j+1]=a[j];
            j=j-1;
    }
    a[j+1]=key;
    }
    printf("\nSorted Array: ");
    for(i=0; i<10; i++){
        printf("\t%d",a[i]);
    }
    getch();
}