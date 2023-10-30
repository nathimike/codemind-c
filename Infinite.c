#include<stdio.h>
int main()
{
    label:
    int n;
    scanf("%d",&n);
    do
    {
        if(n==-1)
        {
            break;
        }
        else
        {
            printf("%d
",n*n);
            goto label;
        }
    }
    while(n!=-1);
}