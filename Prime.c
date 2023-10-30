#include<stdio.h>
#include<math.h>
int main()
{
    int n,c=0;
    scanf("%d",&n);
    for(int i = 2;i<=(pow(n,0.5)+1);i++)
    {
        if(n%i==0)
        {
            c=1;
        }
    }
    if(c==0)
    {
       printf("Prime"); 
    }
    else
    {
        printf("Not Prime");
    }
}