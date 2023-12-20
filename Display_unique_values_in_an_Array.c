#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],c,flag=1;
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
            printf("%d ",arr[i]);
            flag=0;
        }
    }
    if(flag==1)
    {
        printf("-1");
    }
}