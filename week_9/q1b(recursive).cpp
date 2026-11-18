
#include <stdio.h>

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main()
{
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    if (a < 0) a = -a;
    if (b < 0) b = -b;

    if (a == 0 && b == 0)
        printf("GCD is undefined.");
    else
        printf("GCD = %d", gcd(a, b));

    return 0;
}

