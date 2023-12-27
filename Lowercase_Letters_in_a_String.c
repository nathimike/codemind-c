#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],v;
    scanf("%[^
]s",str);
    int c=0,l=strlen(str);
    for(int i=0;i<l;i++)
    {
        if(str[i]>=97 && str[i]<=122)
        {
            c++;
        }
    }
    printf("%d",c);
}