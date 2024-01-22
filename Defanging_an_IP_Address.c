#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[200],str2[200];
    scanf("%s",str);
    int len=strlen(str),j=0;
    for(int i=0;i<len;i++)
    {
        if(isdigit(str[i]))
        {
            str2[j]=str[i];
            j++;
        }
        else
        {
            str2[j]='[';
            str2[j+1]='.';
            str2[j+2]=']';
            j+=3;
        }
    }
    printf("%s",str2);
}