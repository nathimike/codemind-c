#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],c=0,max=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        max=0;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]>max)
            {
                max=arr[j];
            }
        }
        printf("%d ",max);
    }
    printf("-1");
}