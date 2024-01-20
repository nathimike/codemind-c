#include<stdio.h>
#include<string.h>
int vowel(char c)
{
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
    {
        return 1;
    }
    if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
    {
        return 1;
    }
    return 0;
}
int main()
{
    char str[200];
    scanf("%s",str);
    int len=strlen(str),x=len;
    for(int i=0;i<len;i++)
    {
        if(vowel(str[i]))
        {
            for(int j=x-1;j>i;j--)
            {
                if(vowel(str[j]))
                {
                    int temp=str[i];
                    str[i]=str[j];
                    str[j]=temp;
                    x=j;
                    break;
                }
            }
        }
    }
    printf("%s",str);
}