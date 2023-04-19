#include <stdio.h>
#include <stdlib>
#include "dog.h"

/**
 * free_dog - dod struct
 * @d: dog info
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
