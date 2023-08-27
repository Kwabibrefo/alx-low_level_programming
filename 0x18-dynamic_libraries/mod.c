#include <stdio.h>
/**
 * mod - Calculates the modulo of two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Result of the modulo operation of a by b
 */
int mod(int a, int b)
{
    if (b == 0)
    {
        printf("Error: Modulo by zero\n");
        return 0;
    }
    return a % b;
}
