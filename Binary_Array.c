#include<stdio.h>
int main()
{
    int n,flag=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>1)
        {
            flag=1;
        }
    }
    if(flag==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}