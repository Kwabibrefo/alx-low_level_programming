#include <stdio.h>

/**
 * main to enter function
 * Description: print alphs without q and e
 * Return: return 0 (success)
 * */

int main(void)
{
	char letters;
	char q;
	char e;

	for (letters = 'a'; letters <= 'z'; letters++ != 'q'; letters++ != 'e'; letters++)
		putchar(letters);
	putchar('\n');
	return (0);
}
