#include<stdio.h>
int main()
{
    int a,b,flag;
    scanf("%d%d",&a,&b);
    for(a;a<=b;a++)
    {
        flag=0;
        for(int i=2;i<a;i++)
        {
            if(a%i==0 && a!=2)
            {
                flag=1;
            }
        }
        if(flag==0 && a>=2)
        {
            printf("%d
",a);
        }
    }
}