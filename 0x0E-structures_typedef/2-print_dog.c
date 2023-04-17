#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - struct for dog data
 * @d: dog structure
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	if(d == NULL)
	{
		return;
	}
	if (d != NULL)
	{
		printf("name: %s\n", (d->name) ? d->name : "(nil)");
		printf("age: %f\n", (d->age) ? d->age : 0);
		printf("owner: %s\n", (d->owner) ? d->owner : "(nil)");
	}
}
