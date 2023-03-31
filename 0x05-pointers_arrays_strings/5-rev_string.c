#include "main.h"

/**
 * rev_string - entry
 * @s: come charcter
 * Retun: return nun
 */

void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	
	for (i = 0; s[i] != '\0'; i++)
		;
	while (j < i)
	{
		s[j] = s[i];
		j++;
	}
}
