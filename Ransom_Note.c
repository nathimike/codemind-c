#include<stdio.h>
#include<string.h>
int main()
{
    char s1[200],s2[200];
    scanf("%s
%s",s1,s2);
    for(int i=0;s1[i]!=NULL;i++)
    {
        int flag=0;
        for(int j=0;s2[j]!=NULL;j++)
        {
            if(s1[i]==s2[j])
            {
                s2[j]='@';
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            printf("False");
            return 0;
        }
    }
    printf("True");
}