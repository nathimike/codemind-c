#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i = 2;i<=5;i++)
    {
        while(n%i==0)
        {
            n/=i;
        }
    }
    if(n==1)
    {
        printf("Ugly Number");
    }
    else
    {
        printf("Not Ugly Number");
    }
}