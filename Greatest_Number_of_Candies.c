#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],x,c=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&x);
    for(int i=0;i<n;i++)
    {
        c=0;
        for(int j=0;j<n;j++)
        {
            if(arr[i]+x < arr[j])
            {
                c++;
            }
        }
        if(c>0)
        {
            printf("False ");
        }
        else
        {
            printf("True ");
        }
    }
}