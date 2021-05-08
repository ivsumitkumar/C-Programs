#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j, a[2][2], b[2][2], sum[2][2]={0};
    printf("Enter elements of matrix A: \n");
    for(i=0; i<=1; i++)
    {
        for(j=0; j<=1; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter elements of matrix B: \n");
    for(i=0; i<=1; i++)
    {
        for(j=0; j<=1; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("Matrix addition is\n");
    for(i=0; i<=1; i++)
    {
        for(j=0; j<=1; j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }
    getch();
}
