#include<stdio.h>
#include<string.h>
int main()
{
    char s[20];
    scanf("%[^
]s",s);
    int x=strlen(s);
    if(s[0]>48 && x==10)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
}