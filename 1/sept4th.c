#include<stdio.h>
//write a program which generates nth fibonacci number.

int main()
{
    int n,a,b,sum,i;
    printf("enter a number:");
    scanf("%d",&n);
    if(n==0)
    {
        printf("the %dth fabonacci number is 0",n);
    }
    a=0;
    b=1;
    for(i=2;i<=n;i++)
    {
        sum=a+b;
        a=b;
        b=sum;
    }
    printf("the %dth fabonacci number is:%d",n,sum);
    return 0;
}

/*difficulty--->  25/100  */