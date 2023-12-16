#include<stdio.h>
#include<math.h>
int binary(int n)
{
	int rem,bin=0,i=0,temp;
	temp=n;
	while(temp)
	{
		rem=temp%2;
		bin+=rem*pow(10,i);
		temp/=2;;
		i++;
	}
	return bin;
}
int count(int n)
{
	int temp,c=0;
	temp=n;
	while(temp)
	{
		c++;
		temp/=10;
	}
	return c;
}
int nonzero(int n)
{
	int temp=n,flag=0;
	while(temp)
	{
		if(temp%10==0)
		{
			flag=1;
		}
		temp/=10;
	}
	if(flag==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int n,x,y,c1,c2;
	scanf("%d",&n);
	for(int i=0;;i++)
	{
		y=binary(i);
		c1=count(y);
		c2=c1;
		while(n>c2)
		{
			printf("0");
			c2++;
		}
		if(i!=0)
		{
			printf("%d
",y);
		}
		else
		{
			printf("
");
		}
		if(nonzero(y) && c1==n)
		{
			break;
		}
	}
}