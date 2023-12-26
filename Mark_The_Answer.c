#include<stdio.h>
int main()
{
    int n,x;
    scanf("%d%d",&n,&x);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int c=0,d=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>x)
        {
            c++;
        }
        else if(c<=1)
        {
            d++;
        }
    }
    printf("%d",d);
}