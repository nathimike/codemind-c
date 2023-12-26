#include<stdio.h>
#include<string.h>
int main()
{
    char s[20],s1[20];
    scanf("%[^
]s",s);
    scanf(" %[^
]s",s1);
    int res = strcmp(s,s1);
    if(res==0) printf("Strings are Equal");
    else printf("Strings are not Equal");
}