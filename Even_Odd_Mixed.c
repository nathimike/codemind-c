#include<stdio.h>
int main()
{
    int n,c=0,e=0,o=0;
    scanf("%d",&n);
    while(n)
    {
        if((n%10)%2==0)
        {
            e++;
        }
        else
        {
            o++;
        }
        c++;
        n/=10;
    }
    if(c==e)
    {
        printf("Even");
    }
    else if(c==o)
    {
        printf("Odd");
    }
    else
    {
        printf("Mixed");
    }
}