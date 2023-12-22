#include<stdio.h>
int main()
{
    int x,c=0;
    scanf("%d",&x);
    int arr1[x];
    for(int i=0;i<x;i++)
    {
        scanf("%d",&arr1[i]);
    }
    int y;
    scanf("%d",&y);
    int arr2[y];
    for(int i=0;i<y;i++)
    {
        scanf("%d",&arr2[i]);
    }
    int n;
    scanf("%d",&n);
    for(int i=0;i<x;i++)
    {
        if(arr1[i]<=n && arr2[i]>=n)
        {
            c++;
        }
    }
    printf("%d",c);
}