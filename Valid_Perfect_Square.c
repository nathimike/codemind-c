#include<stdio.h>
int main()
{
    int t,n,flag;
    scanf("%d",&t);
    for(int i =1;i<=t;i++)
    {
        flag=0;
        scanf("%d",&n);
        for(int i =1;i<=(n/2)+1;i++)
        {
            if(n==(i*i))
            {
                flag=1;
            }
        }
        if(flag==1)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
}