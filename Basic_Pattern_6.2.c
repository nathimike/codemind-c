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
        for(int j = 1;j<=i;j++)
        {
            printf("%d ",x);
        }
        printf("
");
    }
}