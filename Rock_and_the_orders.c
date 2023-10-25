#include<stdio.h>
int main()
{
    int d,c,a1,a2,a3,b1,b2,b3;
    int a,b;
    scanf("%d%d%d%d%d%d%d%d",&d, &c, &a1, &a2, &a3, &b1, &b2, &b3);
    a = a1+a2+a3;
    b = b1+b2+b3;
    if(a>=150 && b>=150)
    {
        if(a+b+d+d > a+b+c)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
    else if(a>=150 && b<150 || b>=150 && a<150)
    {
        if(a+b+d+d > a+b+c+d)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
    else
    {
        printf("NO");
    }
}