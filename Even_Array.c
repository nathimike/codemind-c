#include<stdio.h>
int main()
{
    int n,i,flag=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++)
    {
        if(arr[i]%2!=0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("False");
    }
    else
    {
        printf("True");
    }
}