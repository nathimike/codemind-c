#include<stdio.h>
int main()
{
    int n,flag=0;
    scanf("%d",&n);
    int arr[n],x;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&x);
    for(int i=0;i<n;i++)
    {
        if(x==arr[i])
        {
            flag=1;
        }
    }
    if(flag==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}