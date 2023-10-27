#include<stdio.h>
#include<math.h>
int main()
{
    int n,x=0,m1,m2,y=0;
    scanf("%d", &n);
    m1=n;
    m2=n;
    while(m1)
    {
        x+=1;
        m1/=10;
    }
    for(x;x>0;x--)
    {
        y+=pow((m2%10),x);
        m2/=10;
    }
    if(n == y)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}