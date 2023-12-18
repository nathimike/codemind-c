#include<stdio.h>
int main()
{
    int mr1,mc1;
    scanf("%d%d",&mr1,&mc1);
    int m1[mc1][mr1];
    for(int i =0;i<mc1;i++)
    {
        for(int j=0;j<mr1;j++)
        {
            scanf("%d",&m1[i][j]);
        }
    }
    int mr2,mc2;
    scanf("%d%d",&mr2,&mc2);
    int m2[mc2][mr2];
    for(int i =0;i<mc2;i++)
    {
        for(int j=0;j<mr2;j++)
        {
            scanf("%d",&m2[i][j]);
        }
    }
    int m3[mc1][mr1];
    for(int i=0;i<mc1;i++)
    {
        for(int j=0;j<mr1;j++)
        {
            m3[i][j]=m1[i][j]+m2[i][j];
        }
    }
    for(int i=0;i<mc1;i++)
    {
        for(int j=0;j<mr1;j++)
        {
            printf("%d ",m3[i][j]);
        }
        printf("
");
    }
}