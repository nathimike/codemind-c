#include<stdio.h>
int main()
{
    int r,c;
    scanf("%d%d",&r,&c);
    int arr[r][c],arr2[r]={0};
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d ",&arr[i][j]);
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            arr2[i]+=arr[i][j];
        }
    }
    for(int i=0;i<r;i++)
    {
        printf("%d ",arr2[i]);
    }
}