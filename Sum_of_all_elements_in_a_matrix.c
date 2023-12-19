#include<stdio.h>
int main()
{
    int r,c;
    scanf("%d%d",&r,&c);
    int arr[r][c],s=0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d ",&arr[i][j]);
            s+=arr[i][j];
        }
    }
    printf("%d",s);
}