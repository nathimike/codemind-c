#include<stdio.h>
int main()
{
    int n,x;
    scanf("%d",&n);
    for(int i = 1;i<=n;i++)
    {
        for(int j = 1;j<=i;j++)
        {
            printf("%d",i);
        }
        for(int k = 1;k<=(n-i);k++)
        {
            {
                printf("*");
            }
        }
        printf("
");
    }
}