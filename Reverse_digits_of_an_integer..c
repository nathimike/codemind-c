#include <stdio.h>
int main()
{
	int n,y=0;
	scanf("%d", &n);
	while(n)
	{
	    y+=(n%10);
	    n/=10;
	    y*=10;
	}
	printf("%d", y/10); 
}