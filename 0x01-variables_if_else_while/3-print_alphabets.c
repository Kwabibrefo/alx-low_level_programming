#include<stdio.h>

/**
 * main - entry poin
 * Description: printing upper and loer case alphabets
 * return: always return 0 (success)
 */

int main(void)
{
	char loLetters;
	char upLetters;

	for (loLetters = 'a'; loLetters <= 'z'; loLetters++)
	for (upLetters = 'A'; upLetters <= 'Z'; upLetters++)
		putchar(loLetters);
		putchar(upLetters);
	putchar('\n');
	return (0);
}
