//03.C program to implement insertion sort.
#include"stdio.h"
#include"conio.h"

void main(){
    int key,i,j,n;

    printf("Enter no. elements: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d Elements:\n",n);
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }

    for(i=1; i<n; i++){
        key=a[i];
        j=i-1;
        while(j>=0 && a[j]>key){
            a[j+1]=a[j];
            j=j-1;
    
    a[j+1]=key;
    }}
    printf("\nSorted Array: ");
    for(i=0; i<n; i++){
        printf("\t%d",a[i]);
    }
    getch();
}
/*
Enter no. elements: 6
Enter 6 Elements:
40 20 60 10 50 30

Sorted Array:   10      20      30      40      50      60
*/