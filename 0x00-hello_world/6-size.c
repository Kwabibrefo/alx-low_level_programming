#include<stdio.h>

/**
 * main - Entry point
 * Description: 'printing sizes of variables'
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	float f;
	char c;
	long int l;
	long long int k;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(l));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(k));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
