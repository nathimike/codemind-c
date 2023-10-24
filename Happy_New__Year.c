#include<stdio.h>
int main()
{
    int h,m;
    scanf("%d%d", &h, &m);
    printf("%d", ((24-h)*60)-m);
}