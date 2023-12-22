#include<stdio.h>
int main()
{
    int n,max;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=1;;i++)
    {
        int c=0,d=0;
        for(int j=0;j<n;j++)
        {
            if(arr[j]%i==0)
            {
                c++;
            }
            if(i>arr[j])
            {
                d++;
            }
        }
        if(c==n)
        {
            max=i;
        }
        if(d==n)
        {
            break;
        }
    }
    printf("%d",max);
}