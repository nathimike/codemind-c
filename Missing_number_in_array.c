#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int k=1;k<=t;k++)
    {
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n-1;i++)
        {
            scanf("%d",&arr[i]);
        }
        for(int i=1;i<=n;i++)
        {
            int flag=0;
            for(int j=0;j<n-1;j++)
            {
                if(i==arr[j])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                printf("%d
",i);
            }
        }
    }
}