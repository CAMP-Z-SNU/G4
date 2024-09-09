//Write a program which checks the number if it is prime or not
//2)optimised solution

#include<math.h>
#include<stdio.h>
int main()
{
    int n,r;
    printf("Enter the Number that needs to be checked:");
    scanf("%d",&n);
    int prime(int);
    r=prime(n);
    if(r==1)
    {
        printf("the given number is a prime number");
    }
    else if(r==-1)
    {
        printf("the given number is not a prime number");
    }
}
int prime(int n)
{
    int i;
    if (n<=1)
    {
        return -1;
    }
    else if (n%2==0 || n%3==0)
    {
        return -1;
    }
    else if (n<=3)
    {
        return 1;
    }
    for(i=5;i<=sqrt(n);i=i+6)
    {
        if(n%i==0 || n%i+2==0)               
            return -1;
    }
    return 1;
}

//difficulty----> 75/100 (it took me a lot of time to understand this question and then think of the right code)