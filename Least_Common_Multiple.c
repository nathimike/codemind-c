#include<stdio.h>
int main()
{
    int a,b,temp;
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        temp=a;
        a=b;
        b=temp;
    }
    for(int i = 1;i<=b;i++)
    {
        if((b*i)%a==0)
        {
            printf("%d", b*i);
            break;
        }
    }
}