#include<stdio.h>
int main()
{
    char str[20];
    scanf("%s",str);
    int v=0,c=0;
    for(int i=0;str[i]!=NULL;i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
        {
            ++v;
            c=0;
        }
        else
        {
            v=0;
            ++c;
        }
        if(c==1) printf("C");
        else if(v==1) printf("V");
    }
}