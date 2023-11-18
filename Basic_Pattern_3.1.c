#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(n;n;n--)
    {
        for(int j = 1;j<=n;j++)
        {
            printf("* ");
        }
        printf("
");
    }
}