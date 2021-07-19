#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - function to free dogs
 *
 * @d: points us to dogs
 *
 * Return: None.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
	free(d->name);
	free(d->owner);
	}
}
