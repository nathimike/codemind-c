#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],min=n,flag;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=1;i<n;i++)
    {
        flag=0;
        for(int j=0;j<n;j++)
        {
            if(i==arr[j])
            {
                flag=1;
            }
        }
        if(flag==0)
        {
            if(i<min)
            {
                min=i;
            }
        }
    }
    printf("%d",min);
}