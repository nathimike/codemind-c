#include<stdio.h>
int main()
{
    int n,x;
    scanf("%d",&n);
    x=n;
    for(n;n;n--)
    {
        for(int j = 1;j<=n;j++)
        {
            printf("%d",j);
        }
        for(int k = 1;k<=(x-n);k++)
        {
            {
                printf("*");
            }
        }
        printf("
");
    }
}