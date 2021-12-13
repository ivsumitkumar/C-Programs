//02.WAP in C to implement recursive binary search
#include"stdio.h"
#include"conio.h"
int binarysearch(int key, int min,int max){
	int a[10]={0,1,2,3,4,5,6,7,8,9};
	int mid=((min+max)/2);
	if(min>mid || key>max){
		printf("\nElement not present.");
		return 0;
	}
	else if(a[mid]==key){
		printf("\nElement Found at index %d",mid);
		return 0;
	}
	else if(a[mid]<key)
		return binarysearch(key,mid+1,max);
	else if(a[mid]>key)
		return binarysearch(key,min,mid-1);
}
int main(){
	int key;
	printf("Enter the key: ");
	scanf("%d",&key);
	binarysearch(key,0,9);
	return 0;
}
/*
OUTPUT:-
Enter the key: 6
Element Found at index 6
*/