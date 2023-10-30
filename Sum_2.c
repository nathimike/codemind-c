#include<stdio.h>
int main()
{
    int a,b,x,y,z=0;
    scanf("%d%d%d%d",&a,&b,&x,&y);
    for(a;a<=b;a++)
    {
        if(a%x==0 and a%y!=0)
        {
            z+=a;
        }
    }
    printf("%d", z);
}