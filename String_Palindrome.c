#include<stdio.h>
int main()
{
    char s[20],s1[20];
    scanf("%[^
]s",s);
    int flag=0,len=0;
    for(int i=0;s[i]!=NULL;i++)
    {
        len++;
        s1[i]=s[i];
    }
    for(int i=0;s[i]!=NULL;i++)
    {
        s[i]=s[len-(i+1)];
        if(s1[i]!=s[i])
        {
            flag=1;
        }
    }
    if(flag==0) printf("Palindrome");
    else printf("Not Palindrome");
}