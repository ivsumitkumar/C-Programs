#include<conio.h>
#include<stdio.h>
void main()
{
	int a[6]={5,6,8,9,10,13},mid, flag=0, key, initial=0, final=5;
	printf("Enter the element to search: ");
	scanf("%d",&key);
	while(initial<final)
	{
		mid = (initial+final)/2;
		if (key==a[mid])
		{
			flag=1;
			break;
		}
		else if (key<a[mid])
			final= mid-1;
		else
			initial = mid+1;
	}
	if (flag==1)
		printf("Element found.");
	else
		printf("Element not found!");
	getch();
}