#include<stdio.h>
int main()
{
    int n,x;
    scanf("%d",&n);
    x=n;
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