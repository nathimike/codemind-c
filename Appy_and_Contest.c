#include<stdio.h>
int main()
{
    int t,n,a,b,k,c;
    scanf("%d",&t);
    for(int i =1;i<=t;i++)
    {
        c=0;
        scanf("%d%d%d%d",&n,&a,&b,&k);
        for(int j=1;j<=n;j++)
        {
            if(j%a==0 && j%b==0)
            {
                continue;
            }
            else if(j%a==0 || j%b==0)
            {
                c++;
            }
        }
        if(c>=k)
        {
            printf("Win
");
        }
        else
        {
            printf("Lose
");
        }
    }
}
