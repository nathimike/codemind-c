#include<stdio.h>
#include<string.h>
int main()
{
    char s1[200],s2[200];
    scanf("%[^
]s",s1);
    scanf(" %[^
]s",s2);
    strcat(s1,s2);
    for(int i=0;s1[i]!=NULL;i++)
    {
        for(int j=0;j<(strlen(s1)-1);j++)
        {
            if(s1[j]>s1[j+1])
            {
                int temp=s1[j];
                s1[j]=s1[j+1];
                s1[j+1]=temp;
            }
        }
    }
    printf("%s",s1);
}