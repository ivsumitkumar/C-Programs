//01.WAP in c to implement recursive linear search.
#include"stdio.h"
#include"conio.h"
int linearsearch(int key, int i){
	int a[10]={0,1,2,3,4,5,6,7,8,9};
	if (i==10){
		printf("\nElement not present.");
		return 0;
	}
	else if(a[i]==key){
		printf("\nElement Found at index %d",i);
		return 0;
	}
	else
		return linearsearch(key,i+1);
}
void main()
{
	int key;
	printf("Enter element to search: ");
	scanf("%d",&key);
	linearsearch(key,0);
	getch();
}
/*
OUTPUT:
Enter element to search: 5

Element Found at index 5
*/