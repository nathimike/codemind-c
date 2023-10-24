#include<stdio.h>
int main()
{
    int x,Y=2;
    scanf("%d",  &x);
    Y+=x;
    label:
    if(Y==1)
    {
        printf("SMALL");
    }
    else if(Y==2)
    {
        printf("NORMAL");
    }
    else if(Y==3)
    {
        printf("HUGE");
    }
    else if(Y>3)
    {
        Y-=3;
        goto label;
    }
}