#include<stdio.h>
int main()
{
    int l,n,w,h;
    scanf("%d%d",&l,&n);
    for(int i = 1;i<=n;i++)
    {
        scanf("%d%d",&w,&h);
        if(w<l || h<l)
        {
            printf("UPLOAD ANOTHER
");
        }
        else
        {
            if(w==h)
            {
                printf("ACCEPTED
");
            }
            else
            {
                printf("CROP IT
");
            }
        }
    }
}