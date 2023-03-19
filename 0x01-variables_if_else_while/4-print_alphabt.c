#include <stdio.h>

/**
 * main to enter function
 * Description: 'print alphs without q and e
 * Return: return 0 (success)
 * */

int main(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
		if (letters != 'q' && letters != 'e')
			putchar(letters);
	putchar('\n');
	return (0);
}
