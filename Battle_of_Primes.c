#include<stdio.h>
int main()
{
    int a,b,flag;
    scanf("%d%d",&a,&b);
    for(int i = 1;i<=9;i++)
    {
        flag=0;
        for(int j=2;j<a+b;j++)
        {
            if((a+b+i)%j==0 && (a+b+i)!=2)
            {
                flag=1;
            }
        }
        if(flag==0)
        {
            printf("%d",i);
            break;
        }
    }
}