#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 1;i <= n; i++)
    {
        if(i%2==1)
        {
            printf("%d ", i);
        }
    }
}