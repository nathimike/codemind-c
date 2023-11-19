#include<stdio.h>
#include<stdlib.h>
int main()
{
    int t,n,c,prime,min;
    scanf("%d",&t);
    while(t)
    {
        scanf("%d",&n);
        min = 1000;
        for(int i=1;i<=(n*10);i++)
        {
            c=0;
            for(int j=1;j<=i;j++)
            {
                if(i%j==0)
                {
                    c++;
                }
            }
            if(c==2)
            {
                if(abs(i-n)<min)
                {
                    min=abs(i-n);
                    prime = i;
                }
            }
        }
        printf("%d
",prime);
        t--;
    }
}