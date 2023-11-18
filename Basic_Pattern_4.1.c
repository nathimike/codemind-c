#include<stdio.h>
int main()
{
    int n,x;
    scanf("%d",&n);
    x=n+1;
    for(int i = 1;i<=n;x--,i++)
    {
        for(int j = 1;j<=n;j++)
        {
            printf("%d ",x%2);
        }
        printf("
");
    }
}