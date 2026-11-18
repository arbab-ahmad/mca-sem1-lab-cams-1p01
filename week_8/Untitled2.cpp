#include<stdio.h>
int main()
{
    int n,temp,rem,sum;
    for (n=0;n<=999;n++)
    {
    	temp=n;
    	sum=0;
    	while (temp>0)
    	{
    		rem=temp%10;
    		sum=sum+rem*rem*rem;
    		temp=temp/10;
		}
	
		if (sum==n)
		{
			printf("%d\n", n);                                                                              
		}
	}

	return 0;
	
}

