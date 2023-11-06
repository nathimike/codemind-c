#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(char i = 1;i<=n;i++)
    {
        for(char j=65;j<(65+n);j++)
        {
            printf("%c ",j);
        }
        printf("
");
    }
}