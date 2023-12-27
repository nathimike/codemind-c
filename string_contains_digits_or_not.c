#include<stdio.h>
int digitcount(char c)
{
    if(c>=48 && c<=58)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int t;
    scanf("%d",&t);
    for(int k=1;k<=t;k++)
    {
        char s[30];
        scanf("%s",s);
        int res=0;
        for(int i=0;s[i]!=0;i++)
        {
            res+=digitcount(s[i]);
        }
        if(res==0) printf("No
");
        else printf("Yes
");
    }
}