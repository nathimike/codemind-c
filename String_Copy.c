#include<stdio.h>
#include<string.h>
int main()
{
    char s[20],s1[20];
    scanf("%[^
]s",s);
    strcpy(s1,s);
    printf("%s",s1);
}