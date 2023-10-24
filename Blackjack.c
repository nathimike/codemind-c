#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d", &x,&y);
    if(21-(x+y)>10)
    {
        printf("-1");
    }
    else
    {
        printf("%d", 21-(x+y));
    }
}