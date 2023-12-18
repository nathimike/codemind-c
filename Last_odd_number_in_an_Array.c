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
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
            x=arr[i];
        }
    }
    printf("%d",x);
}