#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,z=0;
    scanf("%d%d",&a,&b);
    for(int i = 1;i<=b;i++)
    {
        if(a%i==0 && b%i==0)
        {
            if(i>z)
            {
                z=i;
            }
        }
    }
    printf("%d", z);
}