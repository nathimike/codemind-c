#include<stdio.h>
#include<string.h>
int main()
{
    int x;
    scanf("%d",&x);
    for(int k=1;k<=x;k++)
    {
        char str[200];
        scanf("%s",str);
        int len=strlen(str),c=0;
        for(int i=0;i<len-1;i++)
        {
            for(int j=i+1;j<len;j++)
            {
                if(str[i]==str[j])
                {
                    c++;
                }
                break;
            }
        }
        printf("%d
",c);
    }
}