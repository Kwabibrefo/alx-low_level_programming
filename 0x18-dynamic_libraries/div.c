#include <stdio.h>
/**
 * div - Divides two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Result of the division of a by b
 */
int div(int a, int b)
{
    if (b == 0)
    {
        printf("Error: Division by zero\n");
        return 0;
    }
    return a / b;
}
