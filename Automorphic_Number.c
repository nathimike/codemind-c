#include<stdio.h>
#include<math.h>
int main()
{
    int n,x,c=0,z,last;
    scanf("%d",&n);
    z=n;
    x=n*n;
    while(z)
    {
        c++;
        z/=10;
    }
    last=pow(10,c);
    if(n==(x%last))
    {
        printf("Automorphic Number");
    }
    else
    {
        printf("Not an Automorphic Number");
    }
}