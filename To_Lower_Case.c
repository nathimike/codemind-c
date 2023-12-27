#include<stdio.h>
int ToLowerCase(char c)
{
    if(c>='A' && c<='Z')
    {
        c+=32;
    }
    return c;
}
int main()
{
    char s[20];
    scanf("%[^
]s",s);
    for(int i=0;s[i]!=0;i++)
    {
        printf("%c",ToLowerCase(s[i]));
    }
}