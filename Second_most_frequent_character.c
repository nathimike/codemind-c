#include<stdio.h>
int main()
{
    char s[100];
    scanf("%[^
]s",s);
    int max=0,s_max=0,d;
    {
        for(int i=0;s[i]!=NULL;i++)
        {
            int c=0;
            for(int j=0;s[j]!=NULL;j++)
            {
                if(s[i]==s[j])
                {
                    c++;
                }
            }
            if(c>max)
            {
                max=c;
            }
        }
        for(int i=0;s[i]!=NULL;i++)
        {
            int c=0;
            for(int j=0;s[j]!=NULL;j++)
            {
                if(s[i]==s[j])
                {
                    c++;
                }
            }
            if(c<max && c>s_max)
            {
                s_max=c;
                d=s[i];
            }
        }
    }
    if(s_max==0)
    {
        printf("-1");
        return 1;
    }
    printf("%c",d);
}