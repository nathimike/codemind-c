#include<stdio.h>
#include<string.h>
int main()
{
    char s[100000];
    scanf("%[^
]s",s);
    int v=0,max=0;
    for(int i=0;i<=strlen(s);i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
        {
            v++;
        }
        else
        {
            if(v>max) max=v;
            v=0;
        }
    }
    printf("%d",max);
}