#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - adds args passed to it.
 * @argc: variable for size of argv array
 * @argv: an array of pointers to the argument supplied
 * Return: return addition or one
 */

int main(int argc, char *argv[])
{
	int i = 0;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		char *arg = argv[i];
		int j = 0;
		for (j = 0; arg[j]; j++)
		{
			if (!isdigit(arg[j]))
			{
				printf("Error\n");
					return (1);
			}
		}
		sum += atoi(arg);
	}
	printf("%d\n", sum);
	return (0);
}
