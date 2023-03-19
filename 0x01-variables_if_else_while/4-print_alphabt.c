#include <stdio.h>

/**
 * main - entry point
 * Description: printing upper and loer case alphabets
 * Return: always return 0 (success)
 */

int main(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
		if (letters != 'q' && letters != 'e')
			putchar(letters);
	putchar('\n');
	return (0);
}
