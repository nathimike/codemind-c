#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n%2!=0 && n>2)
    {
        for(int i =0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(j==i || j+i==n-1)
                {
                    printf("%c",65+i);
                }
                else
                {
                    printf(" ");
                }
            }
            printf("
");
        }
    }
}