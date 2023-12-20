#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],c,max=0;
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
        if(c==1)
        {
            if(arr[i]>max)
            {
                max=arr[i];
            }
        }
    }
    if(max==0)
    {
        printf("-1");
    }
    else
    {
        printf("%d",max);
    }
}