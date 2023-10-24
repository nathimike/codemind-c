#include<stdio.h>
int main()
{
    int n,y,z;
    scanf("%d%d%d", &n,&y,&z);
    if(n%(y*z)==0)
    {
        printf("%d", n/(y*z));
    }
    else
    {
        printf("%d", n/(y*z) + 1);
    }
}