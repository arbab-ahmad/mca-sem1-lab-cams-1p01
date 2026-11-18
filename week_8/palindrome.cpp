#include<stdio.h>
main()
{
	int n,original,rev=0,digit;
	printf("Enter a number:\n");
	scanf("%d", &n);
	original=n;
	while (n!=0)
	{
		digit=n%10;
		rev=rev*10+digit;
		n=n/10;
	}
	if (original==rev)
	{
		printf("%d is a palindrome.", original);
	}
	else
	{
		printf("%d is not a palindrome.", original);
	}
}
		
