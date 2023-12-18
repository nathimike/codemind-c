#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],s_even=0,s_odd=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            s_even+=arr[i];
        }
        else
        {
            s_odd+=arr[i];
        }
    }
    printf("%d",abs(s_even-s_odd));
}