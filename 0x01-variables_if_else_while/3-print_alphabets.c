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
		putchar(upLetters);
	for (upLetters = 'A'; upLetters <= 'Z'; upLetters++)
		putchar(loLetters);
	putchar('\n');
	return (0);
}
