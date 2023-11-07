#include<stdio.h>
int main()
{
    int n,n1,n2,x,a1,a2;
    scanf("%d",&n);
    n1=n+1;
    n2=n-1;
    for(int i = n1;i<(n+n);i++)
    {
        x=i;
        a1=0;
        while(x)
        {
            a1=a1*10+(x%10);
            x/=10;
        }
        if(a1==i)
        {
            break;
        }
    }
    for(int i = n2;i;i--)
    {
        x=i;
        a2=0;
        while(x)
        {
            a2=a2*10+(x%10);
            x/=10;
        }
        if(a2==i)
        {
            break;
        }
    }
    if((a2-n)==(n-a1))
    {
        printf("%d %d",a2,a1);
    }
    else if((n-a2)>(n-a1))
    {
        printf("%d",a2);
    }
    else if((n-a2)<(n-a1))
    {
        printf("%d",a1);
    }
}