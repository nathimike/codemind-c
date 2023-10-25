#include<stdio.h>
int main()
{
    int l,b,w,c;
    scanf("%d%d%d%d", &l, &b, &w, &c);
    if(2*w<l && 2*w<b)
    {
        printf("%d", c*(l*b-((l-w-w)*(b-w-w))));
    }
    else
    {
        printf("Impossible");
    }
}