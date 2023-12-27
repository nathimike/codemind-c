#include<stdio.h>
#include<string.h>
int main()
{
    char s[20],s1[20];
    scanf("%[^
]s",s);
    int l=strlen(s);
    for(int i=0;i<l;i++)
    {
        s1[i]=s[l-(i+1)];
    }
    s1[l]=NULL;
    printf("%s",s1);
}