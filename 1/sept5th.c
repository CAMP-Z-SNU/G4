#include<stdio.h>

// write a program which checks if a number is a palindrome

int main()
{
    int n,rev,r,temp;
    printf("enter the number:");
    scanf("%d",&n);
    temp=n;
    rev=0;
    while(n>0)
    {
        r=n%10;
        rev=(rev*10)+r;
        n=n/10;
    }
    if(temp==rev)
    {
        printf("pallindrome number");
    }
    else
    {
        printf("not a pallindrome number");
    }
    return 0;
}

/*difficulty---->  1.00023/100  */
