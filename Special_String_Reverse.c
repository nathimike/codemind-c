#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[200];
    scanf("%s",str);
    int len=strlen(str),x=len-1;
    for(int i=0;i<len;i++)
    {
        if(isalpha(str[i]))
        {
            for(int j=x;j>i;j--)
            {
                if(isalpha(str[j]))
                {
                    int temp=str[i];
                    str[i]=str[j];
                    str[j]=temp;
                    x=j-1;
                    break;
                }
            }
        }
    }
    printf("%s",str);
}