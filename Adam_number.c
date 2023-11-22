#include<stdio.h>
int main()
{
    int a,b=0,x,y=0,z=0;
    scanf("%d",&a);
    x=a*a;
    while(a)
    {
        b=b*10+a%10;
        a/=10;
    }
    y=b*b;
    while(y)
    {
        z=z*10+(y%10);
        y/=10;
    }
    if(x==z)
    {
        printf("True");
    }
    else
    {
        printf("False");        
    }
}