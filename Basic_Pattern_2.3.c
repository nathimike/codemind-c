#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i = 0;i<n;i++)
    {
        for(char j = 65;j<=(65+i);j++)
        {
            printf("%c ",j);
        }
        printf("
");
    }
}