#include<stdio.h>
#include<conio.h>
void main( )
{
int i,sum=0;
float a[10], large, small,avg;

printf("Array elements are \n");

for(i=0; i<=9; i++)
    {
    scanf("%f",&a[i]);
    sum=sum+a[i];
    }

large = a[0];
small = a[0];

for(i=1; i<=9; i++)
{
if(a[i] > large)
large = a[i];
else if( a[i] < small)
small = a[i];
}

avg=sum/10.0;

printf("Average is %f\n", avg);
printf("Largest element in array is %f\n", large);
printf("smallest element in array is %f\n", small);
getch( );
}
