#include<stdio.h>
int main()
{
    int r,c;
    scanf("%d%d",&r,&c);
    int arr[r][c],arr2[c]={0};
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d ",&arr[i][j]);
        }
    }
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            arr2[i]+=arr[j][i];
        }
    }
    for(int i=0;i<c;i++)
    {
        printf("%d ",arr2[i]);
    }
}