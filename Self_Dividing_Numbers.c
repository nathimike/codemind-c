#include<stdio.h>
int main()
{
    int x,y,b,count;
    scanf("%d%d", &x, &y);
    for(x; x <= y; x++)
    {
        b = x;
        count=0;
        while(b)
        {
            if(b%10==0)
            {
                count++;
            }
            else if(x%(b%10)!=0)
            {
                count++;
            }
            b/=10;
        }
        if(count==0)
        {
            printf("%d ",x);
        }
    }
}