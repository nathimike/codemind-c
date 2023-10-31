#include<stdio.h>
int main()
{
    int t,n,m,k;
    scanf("%d",&t);
    for(int i = 1;i<=t;i++)
    {
        scanf("%d%d%d",&n,&m,&k);
        if(m >= (k+n))
        {
            printf("YES
");
        }
        else
        {
            printf("NO
");
        }
    }
}