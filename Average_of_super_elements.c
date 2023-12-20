#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],c,x=0,d=0;
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
        if(c==arr[i])
        {
            x+=arr[i];
            d++;
            arr[i]=0;
        }
    }
    if(x==0)
    {
        printf("-1");
    }
    else
    {
        printf("%.2f",(float)x/d);
    }
}