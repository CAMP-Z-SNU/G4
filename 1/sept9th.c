//Write a program to count the 1's in binary of an integer

#include<stdio.h>
int main()
{
    int n,r;
    printf("enter any number that needs to be checked:");
    scanf("%d",&n);
    int binary(int);
    r=binary(n);
    printf("the number of 1's present in the binary number of the number %d is:%d",n,r);
}
int binary(int a)
{
    int step=0;
    while(a)
    {
        step=step+(a & 1);
        a>>=1;
    }
    return step;
}

//difficulty----> 40/100