#include<stdio.h>
#include<string.h>
int main()
{
    char str[200];
    fgets(str,200,stdin);
    int len=strlen(str),c,max=0;
    for(int i=0;i<len;i++)
    {
        int c=0; 
        for(int j=i;j<len;j++)
        {
            if(str[i]==str[j])
            {
                c++;
            }
            else
            {
                if(c>max) max=c;
                break;
            }
        }
    }
    printf("%d",max);
}