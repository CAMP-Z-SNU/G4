//PALINDROME

#include<stdio.h>
int main()
{ int i,n,x,r,s=0;
 printf("enter number=");
 scanf("%d",&n);
 x=n;
 while(n>0)
 {
  r=n%10;
  s=s*10+r;
  n=n/10;
 }
 if(x==s)
 printf("it is a palindrome");
 else
 printf("it is not a palindrome");
 return 0;
}

//DIFFICULTY : 1.3/100 //
