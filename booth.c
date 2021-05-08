#include<stdio.h>
#include<conio.h>
int Q[10],M[10],M1[10],A[10],Q_=0;
int toBinary(int dec,char ch){
   int i=0;
   if(dec<0)
    dec=dec*-1;   // making negative no. positive
  if(ch=='q')   //checking whether to convert Q ?
  {
  while(dec!=0)
  {   
     Q[i]=dec%2;    //storing binary of Q in Q array
     dec/=2;
     i++;
  }
   return i-1;  //returning the last index of Q 
    }
  else     //checking whether to convert M
  {
  while(dec!=0)
  {
    M[i]=dec%2;  //storing binary of M in M array
    dec/=2;
      i++;
  }
  return i-1;   //returning the last index of M
   }
 }
int ones_comp(int i,char ch){
    int k=0;
    if(ch=='q')   //checking for Q
  {
    while(k<=i)
     {  
        Q[k]=Q[k]==0?1:0;  // nagating the bits
          k++;
         }
    }
  else     //checking for M
  {
    while(k<=i)
     {
       M[k]=M[k]==0?1:0;  // negating the bits
           k++;
         }
    }
   }
int twos_comp(int i,char ch){
  int k;
  if(ch=='q')   //checking for Q
  {
     for(k=0;k<=i;k++)    //finding 2's complement
      {
          if(Q[k]==1)
            Q[k]=0;     //changing the bit
          else
           {        
            Q[k]=1;    //changing the  bit
            break;     //terminating the function
           }
      }
    }
    else     //doing for M
    {
       for(k=0;k<=i;k++)    //finding 2's complement
       {
          if(M[k]==1)
              M[k]=0;     //changing the bit      
          else
           {        
          M[k]=1;    //changing the  bit
          break;     //terminating the program
           } 
       }  
    }
  }
int print(int i,char ch){
   
  if(ch=='q')     //printing Q
  {
      while(i>=0)
       printf("%d",Q[i--]);     
  }
  else if(ch=='m')     //printing M
    {
      while(i>=0)
       printf("%d",M[i--]);
    }

    else if(ch=='a')
    {
      while(i>=0)
        printf("%d",A[i--]);
    }
    else            //printing -M
    {
      while(i>=0)
        printf("%d",M1[i--]);
    }
 }
int bit_checker(int q,int m,int q_sign,int m_sign){
  while(q!=m)   //for equating the no. of bits
    {
      if(q>m)   //Q has more no. of bits
      M[++m]=m_sign;
    else      //M has more no. of bits
      Q[++q]=q_sign;
    }
    return q;
 }
int generate_m1(int m){
    int k=m;
  while(k>=0)
  {    //copying M in M1
       M1[k]=M[k];
       k--;
  }
  for(k=0;k<=m;k++)      // finding M1's one's complement
     M1[k]=M1[k]==0?1:0;
  for(k=0;k<=m;k++)      //finding M1's two's complement
    {
      if(M1[k]==1)
         M1[k]=0;     //changing the bit
      else
      {         
         M1[k]=1;    //changing the  bit
         break;     //terminating the conversion
      }
    }
    return m;
 }
int generateQ_M_M1(int q,int m){
  int q_sign=q>=0?0:1;   // initialising sign bit of Q
  int m_sign=m>=0?0:1;   // initialising sign bit of M
    int m1_sign=m_sign==0?1:0;  // initialising sign bit of M1
    int iq= toBinary(q,'q');  //last bit
    int im= toBinary(m,'m');   //last bit 
    printf("binary of |Q|\n");
    print(iq,'q');//for printing a array u need to give index of last bit in array and name of array
    printf("\n");
    printf("binary of |M|\n");
    print(im,'m');
    printf("\n");
    if(q<0)   //condition for finding two's complement of Q
    {
    ones_comp(iq,'q');    //function to find one's complement
    printf("one's complement of Q\n");
    print(iq,'q');
    printf("\n");
    twos_comp(iq,'q');     //function to find two's complement
    printf("two's complement of Q\n");
    print(iq,'q');
    printf("\n");
    Q[++iq]=q_sign;   //adding sign bit
    }
    else
        Q[++iq]=q_sign;
    if(m<0)   //condition for finding two's complement of M
    {
    ones_comp(im,'m');  //function to find one's complement
    printf("One's complement of M\n");
    print(im,'m');  
    printf("\n");  
    twos_comp(im,'m');  //function to find two's complement
    printf("two's complement of M\n");
    print(im,'m');
    printf("\n");
    M[++im]=m_sign;   //adding sign bit
    }
    else
    M[++im]=m_sign;
    iq=im=bit_checker(iq,im,q_sign,m_sign);   //equating the number of bits
    int im1=generate_m1(im);    //function to generate -M(M1) by M
    M1[++im1]=m1_sign;   //adding sign bit in M1
    Q[++iq]=q_sign;   //again adding sign bit in Q
    M[++im]=m_sign;   //again adding sign bit in M
    int a=iq;   // index for Accumulator register
    for (int i = 0; i <=a ; ++i)    //creating accumulator register
       A[i]=0;
    printf("final value of Q is : ");
    print(iq,'q');
    printf("\n");
    printf("final value of M is : ");
    print(im,'m');
    printf("\n");
    printf("final value of -M is: ");
    print(im1,'M');
    printf("\n");     //for printing -M
    printf("final value of A is : ");
    print(a,'a');
    printf("\n");
    return iq;
   }
int addition(int index){   
   int carry=0;
   for (int i = 0; i <=index; ++i)
   { 
     int temp=(A[i]+M[i]+carry)%2;  //storing the added bit in temp variable
     carry=(A[i]+M[i]+carry)/2;   //finding carry
     A[i]=temp;      //changing the current bit
   }
 }
int subtraction(int index){
  int carry=0;
  for (int i = 0; i <=index; ++i)
   { 
     int temp=(A[i]+M1[i]+carry)%2;  //storing the added bit in temp variable
     carry=(A[i]+M1[i]+carry)/2;  //finding carry
     A[i]=temp;        //changing the current bit
   }
 }
int shift(int index){
   int i;Q_=Q[0];   //changing the value of Q_
   for ( i = 0; i < index; ++i)
       Q[i]=Q[i+1];     //right shifting Q
   Q[i]=A[0];   //storing LSB of A at MSB of Q
   for (int i = 0; i < index; ++i)
       A[i]=A[i+1];    //right shifting A
 }
int print_line(int count ,int index){
    printf("%d\t",count);  //printing count
    print(index,'a');   //printing A
    printf("\t");
    print(index,'q');  //printing Q
    printf("\t%d",Q_); //printing Q_
 }
int algo(int count,int index){  
   print_line(count ,index);
   printf("\tInitial\n");
   while(count>0)
   {   
       if(Q[0]==1 && Q_==0)     // ==10
       {
        subtraction(index);    //A=A-M
        print_line(count ,index);
        printf("\tA=A-M\n");
       }
       else if(Q[0]==0 && Q_==1)  // ==01
       {
        addition(index);   //A=A+M
        print_line(count ,index);
        printf("\tA=A+M\n");
       }   
       count--;   //decreasing count
       shift(index);   //right shifting A,Q,Q_
       print_line(count,index);
       printf("\tShift right A,Q,Q_ and count--\n");
   }
 }
int main()
{ 

  int q,m,m1;
  printf("Enter Q and M\n");
  scanf("%d%d",&q,&m);  // storing q,m
  int index=generateQ_M_M1(q,m);
  printf("\ncount\tA\tQ\tQ_1\tsteps\n");    //first coplumn printing
  algo(index+1,index);    //count,index 
  printf("\nFinal answer is: ");
  print(index,'a');
  print(index,'q');
  getch();
 }