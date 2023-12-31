#include<stdio.h>
int main()
{
    char s[20];
    scanf("%s",s);
    int u=0,d=0,l=0,r=0;
    for(int i=0;s[i]!=NULL;i++)
    {
        if(s[i]=='U') u++;
        else if(s[i]=='D') d++;
        else if(s[i]=='L') l++;
        else if(s[i]=='R') r++;
    }
    if(l==r && u==d)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}