#include<stdio.h>
int main()
{
   int t1=0,t2=1,n,i,t3;
   printf("enter number=");
   scanf("%d",&n);
   if(n==0)
   printf("the fibanocci is 0");
   else{
      for(i=2;i<=n;i++)
      {
      t3=t1+t2;
      t1=t2;
      t2=t3;
      }
      printf("the %d fibanocci is %d",n,t3);
      return 0;
      }
}
