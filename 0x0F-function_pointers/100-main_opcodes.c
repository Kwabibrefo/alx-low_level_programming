#include <stdlib.h>
#include <stdio.h>

/**
 * print_opcodes - print the opcodes 
 * @a: address of the main function
 * @n: number of bytes to print
 * Return: void
 */

void print_opcodes(char *a, int n)
{
	int o;
	
	for (o = 0; o < n; o++)
	{
		printf("%.2hhx", a[o]);
		if (o < n - 1)
		{
			printf(" ");
		}
	}
	printf("\n");
}

/**
 * main - prints the opcodes of its own main function
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: O
 */
int main(int argc, char **argv)
{
	int a;
	
	if (argc != 2)
	{
		priintf("Error\n");
		exit(1);
	}
	a = atoi(argv[1]);
	if (a < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, a);
	return (0);
}
