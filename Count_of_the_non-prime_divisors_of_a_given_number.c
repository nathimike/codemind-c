#include<stdio.h>
int main()
{
    int n,c,x=0,y=0;
    scanf("%d",&n);
    for(int i = 1;i<=n;i++)
    {
        if(n%i==0)
        {
            c=0;
            for(int j = 1;j<=i;j++)
            {
                if(i%j==0)
                {
                    c+=1;
                }
            }
            if(c==2)
            {
                x+=1;
            }
            y+=1;
        }

    }
    printf("%d",y-x);
}