#include<stdio.h>
int main()
{
    char str[100];
    scanf("%[^
]s",str);
    int total=0;
    for(int i=0;str[i]!=NULL;i++)
    {
        if(str[i]>=48 && str[i]<=58)
        {
            total+=(str[i]-48);
        }
    }
    printf("%d",total);
}