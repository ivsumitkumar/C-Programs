//07.C Program to implement HEAP SORT
#include<stdio.h>
#include<conio.h>
int arr[6]={6,5,4,3,2,1};
void heapify(int n, int i){
    int largest =i;
    int l=2*i+1;
    int r=2*i+2;
    if(l<n && arr[l] > arr[largest])
        largest=l;
    if(r<n && arr[r]>arr[largest])
        largest=r;
    if(largest != i){
        int temp=arr[i];
        arr[i]=arr[largest];
        arr[largest]=temp;
        heapify(n,largest);
    }
}
void heapsort(int n){
    int i;
    for(i=n/2-1;i>=0;i--)
        heapify(n,i);
    for(i=n-1;i>0;i--){
        int temp=arr[0];
        arr[0]=arr[i];
        arr[i]=temp;
        heapify(i,0);
    }
}
int main(){
    int n=6,i;
    printf("Array: ");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    heapsort(n);
    printf("\nSorted Array: ");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
/*
OUTPUT:-
Array: 6 5 4 3 2 1        
Sorted Array: 1 2 3 4 5 6
*/