#include<stdio.h>
int main()
{
    int n;
    char c = 'A';
    scanf("%d",&n);
    for(int i = 0;i<n;i++)
    {
        for(int k = 0;k<i;k++)
        {
            {
                printf(" ");
            }
        }
        for(int j = 1;j<=(n-i);j++)
        {
            printf("%c ",c+i);
        }

        printf("
");
    }
}