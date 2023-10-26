#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d", &x, &y);
    for(int i = 1;i <= x; i++)
    {
        if((y*i)%x==0 and (y*i)%y==0)
        {
           printf("%d", y*i);
           break;
        }
    }
}