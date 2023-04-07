#include <stdio.h>

/**
 * main - entry point
 * @argc: size of argv
 * @argv: pointer to array with arguments
 * Return: return zero
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
