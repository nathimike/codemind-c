#include <stdio.h>
int main() 
{
    int n,temp,rev,flag;
    scanf("%d",&n);
    for(int i=n+1; ;i++) 
    {
        temp=i;
        rev=0;
        while(temp) 
        {
            rev = rev*10 + temp%10;
            temp /= 10;
        }
        if(i==rev) 
        {
            flag = 0;
            for(int j=2;j<=(i/2)+1;j++)
            {
                if(i % j == 0)
                {
                    flag = 1;
                    break;
                }
            }
            if(flag == 0) 
            {
                printf("%d", i);
                break;
            }
        }
    }
}