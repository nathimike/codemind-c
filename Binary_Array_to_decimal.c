#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],bin=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        bin+=(arr[i]*pow(2,n-(i+1)));
    }
    printf("%d",bin);
}