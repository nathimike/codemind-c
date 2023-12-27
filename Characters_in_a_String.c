#include<stdio.h>
#include<string.h>
int main()
{
    char s[20];
    scanf("%[^
]s",s);
    int l=strlen(s);
    printf("%d",l);
}