#include<stdio.h>
#include<math.h>
int main()
{
    int n,x,c,min=100;
    scanf("%d",&n);
    for(int i = 1;i<=n/2;i++)
    {
        c=pow(2,i);
        x=abs(n-c);
        if(x<=min)
        {
            min=x;
        }
    }
    printf("%d",min);
}