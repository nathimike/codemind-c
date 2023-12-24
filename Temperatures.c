#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],max=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>max)
        {
            max=arr[i];
        }
        
    }
    for(int i=0;i<n;i++)
    {
        int c=0;
        for(int j=i;j<n;j++)
        {
            if(arr[j]>arr[i])
            {
                break;
            }
            c++;
            if(c==n-i)
            {
                c=0;
            }
        }
        printf("%d ",c);
    }
}