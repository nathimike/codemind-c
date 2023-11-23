#include<stdio.h>
int main()
{
    int n,flag=0;
    scanf("%d",&n);
    for(int i =1;i<=(n/2);i++)
    {
        if(i*i==n)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}