//05.C program to implement Selection Sort
#include"stdio.h"
#include"conio.h"
void main(){
    int n,i,j,sum,temp;
    printf("Enter no. of elements: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d Elements:\n",n);
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n; i++){
        sum=i;
        for(j=i+1; j<n; j++){
            if(a[j]<=a[sum])
                sum=j;
            temp=a[i];
            a[i]=a[sum];
            a[sum]=temp;
        }}
    printf("Sorted Array: ");
    for(i=0; i<n;i++)
        printf("%d  ",a[i]);
}
/*
OUTPUT:
Enter no. of elements: 5
Enter 5 Elements:
5 4 3 2 1
Sorted Array: 1  2  3  4  5
*/