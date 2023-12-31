#include<stdio.h>
int main()
{
    int n,flag;
    scanf("%d",&n);
    for(int k=1;k<=n;k++)
    {
        char s[10000];
        scanf("%s",s);
        for(int i=0;s[i]!=NULL;i++)
        {
            flag=0;
            if(s[i]<48 || s[i]>57)
            {
                flag=1;
                printf("False
");
                break;
            }
        }
        if(flag==0) printf("True
");
    }
}