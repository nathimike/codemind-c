#include<stdio.h>
int main()
{
    int u;
    float uc,b,s=0.00,ta;
    scanf("%d",  &u);
    if(u<200)
    {
        uc = 1.20;
    }
    else if(u<400)
    {
        uc = 1.40;
    }
    else if(u<600)
    {
        uc = 1.60;
    }
    else if(u<800)
    {
        uc = 1.80;
    }
    else if(u>=800)
    {
        uc = 2.00;
    }
    b = uc * u;
    if(b>400)
    {
        s = b * 0.15;
    }
    ta = b + s;
    printf("Units Consumed: %d
Cost per Unit: %.2f
Bill: %.2f
Surcharge: %.2f
Total Amount: %.2f",u,uc,b,s,ta);
}