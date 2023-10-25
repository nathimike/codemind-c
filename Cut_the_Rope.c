#include<stdio.h>
int main()
{
    int n,x;
    scanf("%d%d",&n, &x);
    if(n%2==1 && x%2==0)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }
}