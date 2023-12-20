#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],x;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    if(n%2==0)
    {
        x=n/2;
    }
    else
    {
        x=(n/2)+1;
    }
    for(int i=0;i<x;i++)
    {
        if(i==n-(i+1))
        {
            printf("%d %d ",arr[i],0);
            break;
        }
        printf("%d %d ",arr[i],arr[n-(i+1)]);
    }
}