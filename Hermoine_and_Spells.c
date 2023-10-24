#include<stdio.h>
int main()
{
    int s1,s2,s3;
    scanf("%d%d%d", &s1, &s2, &s3);
    if((s1+s2)>(s1+s3) && (s1+s2)>(s2+s3))
    {
        printf("%d", s1+s2);
    }
    else if((s1+s3)>(s1+s2) && (s1+s3)>(s2+s3))
    {
        printf("%d", s1+s3);
    }
    else if((s2+s3)>(s1+s2) && (s2+s3)>(s1+s3))
    {
        printf("%d", s2+s3);
    }
}