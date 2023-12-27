#include<stdio.h>
int main()
{
    char str[100];
    scanf("%[^
]s",str);
    int max=0;
    for(int i=0;str[i]!=NULL;i++)
    {
        if(str[i]>max)
        {
            max=str[i];
        }
    }
    printf("%c",max);
}