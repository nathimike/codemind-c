#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],c=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        c=0;
        for(int j=0;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                c++;
            }
        }
        printf("%d ",c);
    }
}