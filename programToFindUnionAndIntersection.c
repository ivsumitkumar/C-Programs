#include<stdio.h>
#include<conio.h>
//definig union function
int Union(int fs,int ss)
{
  int flag=0;
  int i,j,s1[fs],s2[ss],u[fs+ss];
  printf("\nEnter the Elements of the 1st set:\n");
  for (i=0;i<fs;i++)
  {
   scanf("%d",&s1[i]);
  }
  printf("Enter the Elements of the 2nd set:\n");
  for(i=0;i<ss;i++)
  {
   scanf("%d",&s2[i]);
  }
  int k=fs;
  for (i=0;i<fs;i++)
  {
   u[i]=s1[i];   //copying set into union set
  }
  for(i=0;i<ss;i++)     //traversing set 2
  {  
    flag=0;
    for(j=0;j<fs;j++)      //traversing set 1
    { 
      if (s2[i]==s1[j])   //finding common elements
        { 
          flag=1;
          break;
        }
    }
    if(flag==0)
    {
      u[k++]=s2[i];    //sending the uncommon elements to union set
    }
  }

  printf("union:\n");
  for(i=0;i<k;i++)          //print union set
  { 
    printf("%d ",u[i]);
  }
  getch();
}

//Defining intersection function
int Intersection(int fs,int ss)
{   
  int i,j,s1[fs],s2[ss],I[fs],k=0;
  printf("Enter the Elements of the 1st set:\n");
  for (i=0;i<fs;i++)
  {
   scanf("%d",&s1[i]);
  }
  printf("Enter the Elements of the 2nd set:\n");
  for(i=0;i<ss;i++)
  {
   scanf("%d",&s2[i]);
  }
  for (i=0;i<fs;i++)
  {
    for(j=0;j<ss;j++)
    {
      if (s1[i]==s2[j])
        I[k++]=s1[i];             
    }
  }
  printf("intersection:\n");
  for (i=0;i<k;i++)
  {
    printf("%d ",I[i]);
  }
  getch();
}

int main()
{
    int fs,ss,ch;
    printf("**CALCULATE**\n1- Union\n2- Intersection\n");
    scanf("%d",&ch);
    printf("\nNumber of elements in 1st set: ");
    scanf("%d",&fs);    //1st Set limit
    printf("Number of elements in 2st set: ");
    scanf("%d",&ss);    //2nd set limit
    if (ch==1)
        Union(fs,ss);   //function call
    else if(ch==2)
        Intersection(fs,ss);
    else
        printf("invalid choice");
}