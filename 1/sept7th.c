//Write a program to find factorial of a number using recurtion

#include<stdio.h>
int main()
{
    int factorial(int);
    int n;
    long int r;
    printf("enter any number:");
    scanf("%d",&n);
    r=factorial(n);
    printf("factorial of the given number %d is %ld",n,r);
}
int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return n*factorial(n-1);
    }
}


//difficulty----> 10/100