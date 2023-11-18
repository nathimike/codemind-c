#include<stdio.h>
int main()
{
    int n,x;
    scanf("%d",&n);
    x=n;
    for(int i = 1;i<=n;x--,i++)
    {
        for(int k = 1;k<=(n-i);k++)
        {
            {
                printf(" ");
            }
        }
        for(int j = x;j<=n;j++)
        {
            printf("%d ",j);
        }
        printf("
");
    }
}