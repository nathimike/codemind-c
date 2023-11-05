#include<stdio.h>
int main(){
    int t,l,r,c;
    scanf("%d",&t);
    for(int i = 0;i<t;i++)
    {
        scanf("%d%d",&l,&r);
        c=0;
        for(l;l<=r;l++)
        {
            if(l%10==2 || l%10==3 || l%10==9)
            {
                c++;
            }
        }
        printf("%d
",c);
    }
}