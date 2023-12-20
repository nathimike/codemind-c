#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],flag=0,c,max=0,min=n;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        c=0;
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                c++;
            }
        }
        if(arr[i]==c)
        {
            flag=1;
            if(arr[i]>max)
            {
                max=arr[i];
            }
            if(arr[i]<min)
            {
                min=arr[i];
            }
        }
    }
    if(flag==0)
    {
        printf("-1");
    }
    else
    {
        printf("%d %d",min,max);
    }
}