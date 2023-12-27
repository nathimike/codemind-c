#include<stdio.h>
int main()
{
    char str[20],v;
    scanf("%[^
]s",str);
    scanf(" %c",&v);
    for(int i=0;str[i]!=0;i++)
    {
        if(v==str[i])
        {
            printf("True
%d",i);
            return 1;
        }
    }
    printf("False");
}