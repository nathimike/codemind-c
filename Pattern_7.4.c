#include<stdio.h>
int main()
{
    int n;
    char c = 'A';
    scanf("%d",&n);
    for(int i = 1;i<=n;i++)
    {
        for(int k = 1;k<i;k++)
        {
            {
                printf(" ");
            }
        }
        for(int j = 0;j<=(n-i);j++)
        {
            printf("%c ",c+(n-i));
        }

        printf("
");
    }
}