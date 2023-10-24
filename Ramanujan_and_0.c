#include<stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    if(x==0)
    {
        printf("1");
    }
    else if(x>0)
    {
        printf("%d", 2*x+x);
    }
}