#include<stdio.h>
int main()
{
    int n,flag=0,x,last;
    scanf("%d",&n);
    x=n;
    for(int i=2;i<n;i++)
    {
        if(n%i==0 && n!=2)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
       while(n)
       {
           last=n%10;
           if(last<2)
           {
               flag=1;
               break;
           }
           for(int i=2;i<last;i++)
            {
                if(last%i==0 && last!=2)
                {
                    flag=1;
                    break;
                }
            }
           n/=10;
       }
    }
    if(flag==0 && x>=2)
    {
        printf("Mega Prime");
    }
    else
    {
        printf("Not Mega Prime");
    }
}