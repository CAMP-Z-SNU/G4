//Write a program which checks the number if it is prime or not
//1. Brute force

#include<stdio.h>
#include <stdlib.h>
int main()
{
    int i,n;
    printf("enter the number that needs to be checked:");
    scanf("%d",&n);
    if(n==1)
    {
        printf("the number is not a prime nor a composite number");
    }
    else if(n<1)
    {
        printf("enter valid number");
        exit(0);
    }
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            printf("NOT A PRIME NUMBER");
            break;
        }
    }
    if(n==i)
    {
        printf("PRIME NUMBER");
    }
    return 0;
}

//difficulty-->40/100(cuz idk what brute force is)