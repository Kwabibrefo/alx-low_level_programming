#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * Description: alphabets print out
 * Return: return 0 (success)
 */
int i = 97;
int main(void)
{
	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
