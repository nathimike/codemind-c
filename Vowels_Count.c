#include<stdio.h>
int vowel(char n)
{
    if(n=='a' || n=='e' || n=='i' || n=='o' || n=='u')
    {
        return 1;
    }
    else if(n=='A' || n=='E' || n=='I' || n=='O' || n=='U')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    char s[100],vc=0;
    scanf("%[^
]%*c",s);
    for(int i=0;i<=20;i++)
    {
        if(vowel(s[i]))
        {
            vc++;
        }
    }
    printf("%d",vc);
}