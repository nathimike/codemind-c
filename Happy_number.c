#include<stdio.h>
int main()
{
    int n,last,x;
    scanf("%d",&n);
    label:
    x=0;
    while(n)
    {
        last=n%10;
        x=x+(last*last);
        n/=10;
    }
    if(x>=10)
    {
        n=x;
        goto label;
    }
    else
    {
        if(x==1 || x==7)
        {
            printf("True");
        }
        else
        {
            printf("False");
        }
    }
}