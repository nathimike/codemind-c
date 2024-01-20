#include<stdio.h>
int main()
{
    char str[200];
    scanf("%s",str);
    for(int i=0;str[i]!=NULL;i++)
    {
        int c=0;
        for(int j=0;str[j]!=NULL;j++)
        {
            if(str[i]==str[j]) c++;
        }
        if(c==1)
        {
            printf("%d",i);
            return 1;
        }
    }
    printf("-1");
}