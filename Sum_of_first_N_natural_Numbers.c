#include<stdio.h>
int main()
{
    int n,x=0;
    scanf("%d", &n);
    for(int i = 1;i<=n;i++)
    {
       x+=i;
    }
    printf("%d ", x);
}