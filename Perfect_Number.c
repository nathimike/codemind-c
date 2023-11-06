#include<stdio.h>
int main()
{
    int n,c=0;
    scanf("%d", &n);
    for(int i = 1;i<n;i++)
    {
        if(n%i==0)
        {
            c+=i;
        }
    }
    if(c==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}