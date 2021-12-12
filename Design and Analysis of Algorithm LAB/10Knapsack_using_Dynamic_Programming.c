//10. Knapsack using Dynamic Programming
#include"stdio.h"
#include"conio.h"
int w[10],p[10],kp[10][10],n,i,j,cap,x[10]={0};
int max(int i, int j){
    return ((i>j)?i:j);
}
int knap(int i, int j){
    int value;
    if(kp[i][j]<0){
        if(j<w[i])
            value=knap(i-1,j);
        else
            value=max(knap(i-1,j),p[i]+knap(i-1,j-w[i]));
        kp[i][j]=value;
    }
    return (kp[i][j]);
}
void main(){
    int profit, count=0;
    
    printf("\nEnter the number of elements\n");
    scanf("%d",&n);
    printf("Enter the profit and weights of the elements\n");
    for(i=1;i<=n;i++){
        printf("For item no %d\n",i);
        scanf("%d%d",&p[i],&w[i]);
    }
    printf("\nEnter the capacity\n");
    scanf("%d",&cap);
    for(i=0;i<=n;i++)
        for(j=0;j<=cap;j++)
            if((i==0) || (j==0))
                kp[i][j]=0;
            else
                kp[i][j]=-1;
            profit=knap(n,cap);
            i=n;
            j=cap;
            while(j!=0 && i!=0){
                if(kp[i][j]=kp[i-1][j]){
                    x[i]=1;
                    j=j-w[i];
                    i--;
                }
                else
                    i--;
            }
    printf("Items included are\n");
    printf("Sl.no\tweight\tprofit\n");
    for(i=1;i<=n;i++)
        if(x[i])
            printf("%d\t%d\t%d\n",++count,w[i],p[i]);
        printf("Total profit = %d\n",profit);
        getch();   
}
/*
OUTPUT:-
Enter the number of elements
4
Enter the profit and weights of the elements
For item no 1
3 2
For item no 2
4 3
For item no 3
5 4
For item no 4
6 5

Enter the capacity
5
Items included are
Sl.no   weight  profit
1       5       6
Total profit = 7
*/