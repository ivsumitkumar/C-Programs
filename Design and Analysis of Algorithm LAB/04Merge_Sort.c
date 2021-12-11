//c program to merge sort
#include"stdio.h"
#include"conio.h"

int arr[10]={10,9,8,7,6,5,4,3,2,1};

void main()
{
    mergeSort(0,9);
    for(int i=0; i<10; i++)
    {
        printf("%d",arr[i]);
    }

}
void mergeSort(int p,int r){
    if(p<r){
        int q=((p+r)/2);
        mergeSort(p,q);
        mergeSort(q+1,r);
        merge(p,q,r);
    }
}
void merge(int p,int q, int r){
    int i,j,k;
    int n1 = q - p + 1, n2 = r - q;
    int L[n1+1],R[n2+1];
    for(i=0; i<n; i++){
        L[i] = arr[p+i];}
    for(j=0; j<n2; j++){
        R[j]=arr[q+j+1];}
    L[n1]=0;
    R[n2]=0;
    i=0,j=0;
    for(k=p;k<=r;k++){
        if(L[i]<=R[j]){
            arr[k]=L[i];
            i+=1;
        }
        else{
            arr[k]=R[j];
            j+=1;
        }
    }
}