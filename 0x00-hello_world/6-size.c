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

	printf("Size of char is: %lu.\n", (unsigned long)sizeof(c));
	printf("Size of int is: %lu.\n", (unsigned long)sizeof(i));
	printf("Size of long int is: %lu.\n", (unsigned long)sizeof(l));
	printf("Size of long long int is: %lu.\n", (unsigned long)sizeof(k));

	return(0);
}
