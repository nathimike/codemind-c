#include<stdio.h>
int main()
{
    int n,x1=0,x2=1,x=0,c=0;
    scanf("%d", &n);
    for(int i = 0;i<=n;i++)
    {
        x=x1+x2;
        if(n==x)
        {
            c=1;
        }
        x1=x2;
        x2=x;
    }
    if(c==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}