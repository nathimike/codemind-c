#include<stdio.h>
int main()
{
    int n,x=0;
    scanf("%d",&n);
    char s[3];
    for(int i=1;i<=n;i++)
    {
        scanf("%s",s);
        if(s[0]=='X')
        {
            if(s[1]=='+')
            {
                x++;
            }
            else
            {
                x--;
            }
        }
        else
        {
            if(s[0]=='+')
            {
                ++x;
            }
            else
            {
                --x;
            }
        }
    }
    printf("%d",x);
}