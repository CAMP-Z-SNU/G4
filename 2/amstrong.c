#include<stdio.h>

int main()
{
 int x,c=0,n,p,i,r,s=0;
 printf("enter number=");
 scanf("%d",&n);
 x=n;
 p=n;
 while(n!=0)
  { n=n/10;
    ++c;
  }
 while(x>0)
  {r=x%10;
  for(i=1;i==c;i++)
  {
  s=s*r;}
  x=x/10;
 } 
 if(x==s)
 printf("it is amstrong");
 else
 printf("it is not amstrong");
 return 0;
}
