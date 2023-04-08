#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the multiple of args passed to it.
 * @argc: variable for size of argv array
 * @argv: an array of pointers to the argument supplied
 * Return: return multiple or one
 */

int main(int argc, char *argv[])
{
	int a = 0;
	int b = 0;

	if (argc != 3)
	{
		printf("Error");
		return (1);
	}
		a = atoi(argv[1]);
		b = atoi(argv[2]);

		printf("%d\n", (a * b));
	return (0);
}
