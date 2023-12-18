#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],min=n;
    for(int i=0;i<n;i++)
    {
        scanf("%d ",&arr[i]);
    }
    int x,res[2]={-1,-1};
    scanf("%d",&x);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x && i<min)
        {
            res[0]=i;
            min=i;
        }
        if(arr[i]==x)
        {
            res[1]=i;
        }
    }
    printf("%d %d",res[0],res[1]);
}