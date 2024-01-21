#include<stdio.h>
#include<string.h>

int isVowel(char c) 
{
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main()
{
    char str[200];
    scanf("%s",str);
    int max=0,c=0,len=strlen(str);
    for(int i=0;i<len;i++)
    {
        if (isVowel(str[i])) 
        {
            c++;
            if (c > max) 
            {
                max=c;
            }
        } 
        else 
        {
            c=0;
        }
    }
    printf("%d",max);
}