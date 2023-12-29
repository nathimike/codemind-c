#include<stdio.h>
int main()
{
    char s[20];
    scanf("%[^
]",s);
    int v=0,c=0;
    for(int i=0;s[i]!=NULL;i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
        {
            v++,c=0;
            if(v==1)
            {
                printf("V");
            }
        }
        else
        {
            c++,v=0;
            if(c==1)
            {
                printf("C");
            }
        }
    }
}