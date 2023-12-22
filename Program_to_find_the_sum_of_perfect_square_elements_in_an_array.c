#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int s=0,x;
    for(int i=0;i<n;i++)
    {
        x=sqrt(arr[i]);
        if(x*x==arr[i])
        {
            s+=arr[i];
        }
    }
    printf("%d",s);
}