#include<stdio.h>
#include<ctype.h>
int main()
{
    char str[200];
    scanf("%[^
]s",str);
    int num[200],n=0,c=0;
    for(int i=0;str[i]!=NULL;i++)
    {
        if(isdigit(str[i]))
        {
           num[n++]=(str[i]-48); 
        }
        if(!(isalnum(str[i])))
        {
            c++;
        }
    }
    int arr2[n];
    if(c%2==0)
    {
        int k=0,l=1;
    	for(int i=0;i<n;i++)
    	{
    		for(int j=0;j<n;j++)
    		{
    		    if(num[j]==-1) continue;
    		    else if(i==n-1)
    		    {
    		        arr2[i]=num[j];
    		    }
    			else if(i%2==0 && num[j]%2==0)
    			{
    				arr2[k]=num[j];
    				num[j]=-1;
    				k+=2;
    				break;
    			}
    			else if(i%2!=0 && num[j]%2!=0)
    			{
    				arr2[l]=num[j];
    				num[j]=-1;
    				l+=2;
    				break;
    			}
    		}
    	}
    }
    else
    {
        int k=0,l=1;
    	for(int i=0;i<n;i++)
    	{
    		for(int j=0;j<n;j++)
    		{
    		    if(num[j]==-1) continue;
    		    else if(i==n-1)
    		    {
    		        arr2[i]=num[j];
    		    }
    			else if(i%2==0 && num[j]%2!=0 && i!=n-1)
    			{
    				arr2[k]=num[j];
    				num[j]=-1;
    				k+=2;
    				break;
    			}
    			else if(i%2!=0 && num[j]%2==0 &&i!=n-1)
    			{
    				arr2[l]=num[j];
    				num[j]=-1;
    				l+=2;
    				break;
    			}
    		}
    	}
    }
    for(int i=0;i<n;i++)
    {
		printf("%d",arr2[i]);
    }
}