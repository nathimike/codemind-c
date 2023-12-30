#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int k=1;k<=t;k++)
    {
        char s[20],s1[20];
        scanf("%s",s);
        strcpy(s1,s);
        int x=strlen(s);
        for(int i=0;i<x-1;i++)
        {
            s1[i]=s[x-(i+1)];
        }
        int res=strcmp(s1,s);
        if(res==0)
        {
            if(x%2==0) printf("YES EVEN");
            else printf("YES ODD");
        }
        else
        {
            printf("NO");
        }
        printf("
");

    }
}