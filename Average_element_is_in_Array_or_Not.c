#include<stdio.h>
int main()
{
    int n,sum=0,flag=0;
    scanf("%d",&n);
    int arr[n],avg;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        avg=sum/(i+1);
    }
    for(int i=0;i<n;i++)
    {
        if(avg==arr[i])
        {
            flag=1;
        }
    }
    if(flag==0)
    {
        printf("False");
    }
    else
    {
        printf("True");
    }
}