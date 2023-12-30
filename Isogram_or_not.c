#include<stdio.h>
int main()
{
    char s[200];
    scanf("%[^
]s",s);
    for(int j=97;j<=122;j++)
    {
        int c=0;
        for(int i=0;s[i]!=NULL;i++)
        {
            if(s[i]>=65 && s[i]<=90)
            {
                s[i]+=32;
            }
            if(s[i]==j)
            {
                c++;
            }
        }
        if(c>1)
        {
            printf("False");
            return 1;
        }
    }
    printf("True");
}