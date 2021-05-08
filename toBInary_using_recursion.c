#include<stdio.h>
#include<conio.h>

int toBinary(int decimal)
{
	if (decimal == 0)
		return 0;
	else
		return decimal%2 +10*(toBinary(decimal/2));
}
int main ()
{
	int d;
	printf("Decimal Value: ");
	scanf("%d",&d);
	int bin=toBinary(d);
	printf("\nBinary: %d",bin);
	getch();

}