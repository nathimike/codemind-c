#include <stdio.h>
int main()
{
	int x,n,y=0;
	scanf("%d", &x);
	n = x;
	while(n)
	{
	    y+=(n%10);
	    n/=10;
	    y*=10;
	}
	if(x == y/10)
	{
	   printf("Palindrome"); 
	}
	else
	{
	    printf("Not Palindrome"); 
	}
	
}