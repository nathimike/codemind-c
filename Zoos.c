#include<stdio.h>
int main()
{
    char s[20];
    scanf("%s",s);
    int z=0,o=0;
    for(int i=0;s[i]!=NULL;i++)
    {
        if(s[i]=='z')
        {
            z++;
        }
        else
        {
            o++;
        }
    }
    if(2*z==o)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}