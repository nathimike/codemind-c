#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d", &a, &b);
    for(a;a<(b-1);a++)
    {
       printf("%d %d %d
",a+1,(a+1)*(a+1) ,(a+1)*(a+1)*(a+1) );
    }
}