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
    for(int i=1;;i++)
    {
        int c=0;
        for(int j=0;j<n;j++)
        {
            if(i%arr[j]==0)
            {
                c++;
            }
        }
        if(c==n)
        {
            printf("%d",i);
            break;
        }
    }
}