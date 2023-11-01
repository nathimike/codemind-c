#include<stdio.h>
int main()
{
    int n,c,z=0;
    scanf("%d", &n);
    for(int i = 1;i<=n;i++)
    {
        c=0;
        for(int j = 1;j<=i;j++)
        {
            if(i%j==0)
            {
                c+=1;
            }
        }
        if(c==9)
        {
            printf("%d ", i);
            z+=1;
        }
    }
    printf("
Total=%d", z);
}