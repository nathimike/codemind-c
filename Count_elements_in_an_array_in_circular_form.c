#include<stdio.h>
int main()
{
    int n,c=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    n+=2;
    arr[n-2]=arr[0];
    arr[n-1]=arr[1];
    for(int i=0;i<n-2;i++)
    {
        if(arr[i]%2!=0 && arr[i+2]%2==0)
        {
            c++;
        }
        if(arr[i]%2==0 && arr[i+2]%2!=0)
        {
            c++;
        }
    }
    printf("%d",c);
}