#include<stdio.h>
int main()
{
    int n,c1,c2,a=100,b;
    scanf("%d",&n);
    for(int i = 2;i<n/2;i++)
    {
        if(n%i==0)
        {
            c1=0,c2=0;
            for(int k = 2;k<=i;k++)
            {
                if(i%k==0)
                {
                    c1++;
                }
            }
            if(c1==1)
            {
                if(i<a)
                {
                    a=i;
                }
            }
            b=(n/a);
            for(int j = 2;j<=i;j++)
            {
                if(i%j==0)
                {
                    c2++;
                }
            }
            if(c2!=1)
            {
                b=0;
            }
        }
    }
    if(a==100 || b==0)
    {
        printf("-1");
    }
    else
    {
        printf("%d %d",a,b);
    }
}