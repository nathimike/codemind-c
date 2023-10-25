#include<stdio.h>
int main()
{
    int a,b;
    int count = 0;
    scanf("%d%d",&a, &b);
    label:
    if(a%b==0)
    {
        printf("%d",count);
    }
    else
    {
        a++;
        count++;
        goto label;
    }
}