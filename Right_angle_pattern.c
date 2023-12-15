#include<stdio.h>
int main() 
{
    int n,s,x,i,j,k;
    scanf("%d%d",&n,&s);
    x=(((n+1) * n)/2)+s-1;
    for(i=1;i<=n;i++)
    {
    	for(k=1;k<i;k++)
    	{
    		printf("  ");
		}
    	for(j=n;j>=i;j--,x--)
    	{
    		if(j==i || i==1 || j==n)
    		{
    			printf("%d ",x);
			}
			else
			{
				printf("  ");
			}
		}
		printf("
");
	}
}