#include<stdio.h>
//finish armstrong number power variation task ( manually write pow() code )

int main()
{
    int n,arm,temp,r,step,c,i;
    printf("Enter the number that needs to be checked:");
    scanf("%d",&n);
    temp=n;
    c=n;
    arm=0;
    step=0;
    while(n>0)
    {
        n=n/10;
        step=step+1;
    }
    while(temp>0)
    {
        r=temp%10;
        for(i=1;i<=step;i++)
        {
            arm=arm*r;    
        }
        temp=temp/10;
    }
    if(arm==temp)
    {
        printf("The number %d is an Armstrong Number",c);
    }
    else
    {
        printf("the number %d is not an Armstrong Number",c);
    }
    return 0;
}

//difficulty--> 38/100 (because of not using the pow function)