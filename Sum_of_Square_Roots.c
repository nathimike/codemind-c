#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    float z=0;
    scanf("%d%d%d%d",&a,&b);
    for(a;a<=b;a++)
    {
        z+=sqrt(a);
    }
    printf("%.2f", z);
}