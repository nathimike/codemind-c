#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],arr2[n],c=0,x=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        {
            c++;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(arr[j]%2==0)
            {
                arr2[x]=arr[i];
                x++;
                break;
            }
            else
            {
                arr2[c]=arr[i];
                c++;
                break;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr2[i]);
    }
}