#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - converts bin to dec
 * @b: pointer to bin char
 * Return: dec
 *
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int n;
	unsigned int dec_val = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		n = b[i] - '0';
		if (n > 1)
		{
			return (0);
		}
		dec_val = 2 * dec_val + n;
	}
	return (dec_val);
}

