#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],c=0,max=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]==1)
        {
            c++;
            if(c>max)
            {
                max=c;
            }
        }
        else
        {
            c=0;
        }
    } 
    printf("%d",max);
}