
#include <stdio.h>

void tower(int n, char source, char auxiliary, char destination)
{
    if (n == 1)
    {
        printf("Move disk 1 from %c to %c\n",
               source, destination);
        return;
    }

    // Step 1: Move n-1 disks to auxiliary rod
    tower(n - 1, source, destination, auxiliary);

    // Step 2: Move the largest disk
    printf("Move disk %d from %c to %c\n",
           n, source, destination);

    // Step 3: Move n-1 disks to destination rod
    tower(n - 1, auxiliary, source, destination);
}

int main()
{
    int n;

    printf("Enter number of disks: ");
    scanf("%d", &n);

    tower(n, 'A', 'B', 'C');

    return 0;
}

