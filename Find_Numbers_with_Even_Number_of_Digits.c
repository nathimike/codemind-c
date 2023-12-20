#include<stdio.h>
int even(int n)
{
    int c=0;
    while(n)
    {
        c++;
        n/=10;
    }
    if(c%2==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],c=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(even(arr[i]))
        {
            c++;
        }
    }
    printf("%d ",c);
}