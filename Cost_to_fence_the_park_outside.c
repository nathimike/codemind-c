#include<stdio.h>
int main()
{
    int l,b,w,c;
    scanf("%d%d%d%d", &l, &b, &w, &c);
    printf("%d", c*((l+w+w)*(b+w+w)-l*b));
}