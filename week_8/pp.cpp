#include<stdio.h>
main()
{
	int temp, n, rem, sum;
	printf("Armstronmg numbers b/w 0 and 999 are:\n");
	for (n = 0; n <= 999; n++)
	{
		temp = n;
		sum = 0;
		while (temp != 0)
		{
			rem = temp%10;
			sum = sum+rem*rem*rem;
			temp = temp/10;
		}
		if (sum == n)
		{
			printf("%d", n);
		}
	}
}
		
