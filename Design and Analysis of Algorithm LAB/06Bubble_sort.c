//C program to implement Bubble Sort
#include"stdio.h"
#include"conio.h"
void main(){
    int i,j,n;
    printf("Enter no. of elements: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d Elements:\n",n);
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=0; j<n-i-1; j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("Sorted Elements: ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
/*
OUTPUT:-
Enter no. of elements: 10
Enter 10 Elements:
10 9 8 7 6 5 4 3 2 1
Sorted Elements: 1 2 3 4 5 6 7 8 9 10
*/