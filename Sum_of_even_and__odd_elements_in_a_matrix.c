#include<stdio.h>
int main()
{
    int r,c;
    scanf("%d%d",&r,&c);
    int arr[r][c],s_even=0,s_odd=0;
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
            if(arr[i][j]%2==0)
            {
                s_even+=arr[i][j];
            }
            else
            {
                s_odd+=arr[i][j];
            }
        }
    }
    printf("%d %d",s_even,s_odd);
}