#include<stdio.h>
int main()
{
    int n,x1=0,x2=1,x;
    scanf("%d", &n);
    printf("0 1 ");
    for(int i = 0;i<n-2;i++)
    {
        x=x1+x2;
        x1=x2;
        x2=x;
        printf("%d ",x);
    }
}