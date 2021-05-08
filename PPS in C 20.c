#include<stdio.h>
#include<conio.h>
void main()
{
int a=5, b=9;
int c= a&b;
printf("Bitwise AND between a&b=%d", c);
c=a|b;
printf("\nBitwise OR between a&b= %d", c);
c=a^b;
printf("\nBitwise XOR between a&b= %d", c);
c=~a;
printf("\nBitwise NOT of a= %d", c);
c=a<<1;
printf("\nBitwise left shift of a by 1=%d", c);
c=a>>1;
printf("\nBitwise right shift of a by 1=%d", c);
getch();
}
