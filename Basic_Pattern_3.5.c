#include<stdio.h>
int main()
{
    int n;
    char c = 'A';
    scanf("%d",&n);
    for(n;n;n--)
    {
        for(int j = 1;j<=n;j++)
        {
            printf("%c ",c + (j-1));
        }
        printf("
");
    }
}