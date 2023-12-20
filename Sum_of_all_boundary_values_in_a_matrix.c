#include<stdio.h>
int main()
{
    int r,c;
    scanf("%d%d",&r,&c);
    int arr[r][c],sum=0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
            if(j==0 || j==c-1 || i==0 || i==r-1)
            {
                sum+=arr[i][j];
            }
        }
    } 
    printf("%d",sum);
}