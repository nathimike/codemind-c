#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int x;
        scanf("%d",&x);
        char s[x];
        scanf("%s",s);
        int d,flag;
        for(int j=0;j<x;j++)
        {
            d=0,flag=0;
            for(int k=0;k<x;k++)
            {
                if(s[j]==s[k])
                {
                    d++;
                }
            }
            if(d==1)
            {
                flag=1;
                printf("%c
",s[j]);
                break;
            }
        }
        if(flag==0) printf("-1
");
    }
}