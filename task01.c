#include <stdio.h>
#include <stdlib.h>

void printTimesTable(int number)
{
    printf("\nTimes Table of %d\n", number);
    printf("-----------------\n");

    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", number, i, number * i);
    }
}

void printStarPattern(int size)
{
    printf("\nStar Pattern (%d x %d)\n", size, size);
    printf("----------------------\n");

    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

int main(void)
{
    int number;

    printf("Enter a number: ");
    if (scanf("%d", &number) != 1)
    {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    /* Decision:
       The times table uses the entered number exactly.
       For a negative input, abs(number) is used as the star-pattern size.
       For zero, the program reports that a zero-size pattern has no rows.
    */
    printTimesTable(number);

    if (number == 0)
    {
        printf("\nStar Pattern: size 0 has no rows to print.\n");
    }
    else
    {
        printStarPattern(abs(number));
    }

    return 0;
}
