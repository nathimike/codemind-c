#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[2000];
    scanf("%[^
]s",str);
    int num[2000],i,j=0,flag=0;
    for(i=0;str[i]!=NULL;i++)
    {
        if(isdigit(str[i]))
        {
            num[j++]=str[i]-48;
            if(str[i]%2==0) flag=1;
        }
    }
    if(flag==0)
    {
        printf("-1");
        return 0;
    }
    int min=10;
    for(int i=0;i<j;i++)
    {
        if(num[i]%2==0 && num[i]<min)
        {
            min=num[i];
        }
    }
    for(int k=9;k;k--)
    {
        for(int i=0;i<j;i++)
        {
            if(k==min) continue;
            else if(k==num[i])
            {
                printf("%d",k);
                break;
            }
        }
    }
    printf("%d",min);
}