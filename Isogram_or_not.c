#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    scanf("%[^
]s",str);
    int flag=0;
    for(int j=97;j<=122;j++)
    {
        int c=0;
        for(int i=0;str[i]!=NULL;i++)
        {
            if(str[i]>=65 && str[i]<=91)
            {
                str[i]+=32;
            }
            if(j==str[i])
            {
                c++;
            }
            if(c>1)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            printf("False");
            return 0;
        }
    }
    printf("True");
}