#include<stdio.h>
#include<math.h>
int main()
{
    int n,x,a,a1,b,b1,c=0,m;
    scanf("%d%d",&n,&x);
    m=n;
    a=pow(10,x);
    a1=n%a;
    while(m)
    {
        c++;
        m/=10;
    }
    b=pow(10,c-x);
    b1=n/b;
    if(b1>a1)
    {
        printf("%d",b1-a1);
    }
    else
    {
        printf("%d",a1-b1);
    }
}