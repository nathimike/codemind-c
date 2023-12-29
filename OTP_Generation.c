#include<stdio.h>
int main()
{
    char s[20];
    scanf("%[^
]s",s);
    for(int i=0;s[i]!=NULL;i++)
    {
        if(s[i]%2!=0)
        {
            int x=s[i]-48;
            printf("%d",x*x);
        }
    }
}