#include<stdio.h>
int main()
{
    int n,c=0;
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
            c++;
        }
    }
    printf("%d",c);
}