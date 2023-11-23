#include<stdio.h>
int main()
{
    int n,x,c=0,last,flag=0;
    scanf("%d",&n);
    for(int i =1;i<=9;i++)
    {
        x=n;
        c=0;
        while(x)
        {
            last=x%10;
            if(last==i)
            {
                c++;
            }
            x/=10;
        }
        if(c>1)
        {
            flag=1;
        }
    }
    if(flag==0)
    {
        printf("Unique Number");
    }
    else
    {
        printf("Not Unique Number");
    }
}