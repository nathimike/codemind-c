#include<stdio.h>
int main()
{
    char s[200],c;
    scanf("%[^
]s",s);
    scanf(" %c",&c);
    int d=0;
    for(int i=0;s[i]!=NULL;i++)
    {
        if(c==s[i])
        {
            d++;
        }
    }
    if(d==0)
    {
        printf("-1");
    }
    else
    {
        printf("%d",d);
    }
}