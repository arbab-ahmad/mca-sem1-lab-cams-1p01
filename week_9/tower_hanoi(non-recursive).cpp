
#include <stdio.h>

void move(char from, char to)
{
    printf("Move disk from %c to %c\n", from, to);
}

int main()
{
    int n, totalMoves, i;
    char source = 'A';
    char auxiliary = 'B';
    char destination = 'C';

    printf("Enter number of disks: ");
    scanf("%d", &n);

    totalMoves = (1 << n) - 1;

    // For even number of disks, swap auxiliary and destination
    if (n % 2 == 0)
    {
        char temp = auxiliary;
        auxiliary = destination;
        destination = temp;
    }

    for (i = 1; i <= totalMoves; i++)
    {
        if (i % 3 == 1)
        {
            move(source, destination);
        }
        else if (i % 3 == 2)
        {
            move(source, auxiliary);
        }
        else
        {
            move(auxiliary, destination);
        }
    }

    return 0;
}

