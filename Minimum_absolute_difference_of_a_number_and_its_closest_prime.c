#include<stdio.h>
#include<math.h>
int main()
{
    int n,x,flag,min=100;
    scanf("%d",&n);
    for(int i =2;i<=(n*2);i++)
    {
        flag=0;
        for(int j = 2;j<i;j++)
        {
            if(i%j==0 && i!=2)
            {
                flag=1;
            }
        }
        if(flag==0)
        {
            x=abs(n-i);
            if(x<=min)
            {
                min=x;
            }
        }
    }
    printf("%d",min);
}