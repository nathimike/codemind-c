#include<stdio.h>
int main()
{
    char s[20];
    scanf("%[^
]s",s);
    int c=0;
    for(int i=0;s[i]!=NULL;i++)
    {
        if(s[i]==' ') c++;
    }
    printf("%d",c+1);
}