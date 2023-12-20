#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],x,y,flag=0,max=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&x,&y);
    for(int i=0;i<n;i++)
    {
        if(arr[i]<x || arr[i]>y)
        {
            flag=1;
            if(arr[i]>max)
            {
                max=arr[i];
            }
        }
    }
    if(flag==0)
    {
        printf("-1");
    }
    else
    {
        printf("%d",max);
    }
}