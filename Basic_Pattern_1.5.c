#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(char j=65;j<(65+n);j++)
    {
        for(int i = 1;i<=n;i++)
        {
            printf("%c ",j);
        }
        printf("
");
    }
}