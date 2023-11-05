#include<stdio.h>
int main(){
    int t,n,x,c,f;
    scanf("%d",&t);
    for(int i = 0;i<t;i++)
    {
        scanf("%d",&n);
        c=n;
        x=0;
        while(c)
        {
            f=1;
            for(int i = 1;i<=(c%10);i++)
            {
                f*=i;
            }
            x+=f;
            c/=10;
        }
        if(x==n)
        {
            printf("Strong
");
        }
        else
        {
            printf("Not Strong
");
        }
    }
}