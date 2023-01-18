#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dog memory
 * @d: pointer to memory being freed
 * Return: 0
*/
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			free(d->name);
		if (d->owner != NULL)
			free(d->owner);
		free(d);
	}
}
