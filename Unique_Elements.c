#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int x;
    scanf("%d",&x);
    for(int i=0;i<n;i++)
    {
        int c=0;
        for(int j=i;j<n;j++)
        {
            if(arr[i]==arr[j] && arr[i]!=0)
            {
                c++;
                if(c>1)
                {
                    arr[j]=-1;
                }
            }
        }
        if(arr[i]>=0)
        {
            printf("%d ",arr[i]);
        }
    }
}