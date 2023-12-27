#include<stdio.h>
int main()
{
    char str[200];
    scanf("%[^
]s",str);
    int c=0;
    for(int i=1;str[i]!=0;i++)
    {
        if(str[i]>=65 && str[i]<=90)
        {
            c++;
        }
    }
    printf("%d",c+1);
}