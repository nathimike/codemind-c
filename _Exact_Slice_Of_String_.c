#include<stdio.h>
int main()
{
    char str[200];
    fgets(str,200,stdin);
    int x,y;
    scanf("%d%d",&x,&y);
    for(int i=x;i<=y;i++)
    {
        printf("%c",str[i]);
    }
}