#include<stdio.h>
int main()
{
    int r,c;
    scanf("%d%d",&r,&c);
    int arr[r][c],sum=0,max1=0,max2=0;
    for(int i=0;i<r;i++)
    {
        sum=0;
        for(int j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
            sum+=arr[i][j];
            if(sum>max1)
            {
                max1=sum;
            }
        }
    }
    for(int i=0;i<c;i++)
    {
        sum=0;
        for(int j=0;j<r;j++)
        {
            sum+=arr[j][i];
            if(sum>max2)
            {
                max2=sum;
            }
        }
    }
    if(max1>=max2)
    {
        printf("%d",max1);
    }
    else
    {
        printf("%d",max2);
    }
}