#include<stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    if(x%5==0)
    {
        printf("%d", (x/10)+((x%10)/5));
    }
    else
    {
        printf("-1");
    };
}