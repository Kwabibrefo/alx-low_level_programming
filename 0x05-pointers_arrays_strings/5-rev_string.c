#include "main.h"

/**
 */

void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	int k = 0;
	char l;
	char m;
	
	while (s[i] != '\0')
	{
		i++;
	}

	j = (i - 1);

	if (i % 2 != 0)
	{
		while (k <= i / 2 )
		{
			l = s[k];
			m = s[j];
			s[k] = m;
			s[j] = l;
			k++;
			j--;
		}
	}
	else
	{
		while (k <= ((i / 2) -1))
		{
			l = s[k];
			m = s[j];
			s[k] = m;
			s[j] = l;
			k++;
			j--;
		}
	}
}
