#include<stdio.h>
int main()
{
    char str[20];
    scanf("%s",str);
    int c=0;
    for(int i=0;str[i]!=NULL;i++)
    {
        int x=str[i]-48;
        if(x%2==1) 
        {
            printf("%d",x*x);
        }
    }
}