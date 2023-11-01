#include<stdio.h>
int main()
{
    int x,y,c,z;
    scanf("%d%d",&x,&y);
    for(x;x<=y;x++)
    {
        c=0;
        z=x;
        while(z)
        {
            c=c*10+(z%10);
            z/=10;
        }
        if(c==x)
        {
            printf("%d ", c);
        }
    }
}