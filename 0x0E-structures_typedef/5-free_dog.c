#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_dog - frees dogs
 * @d: structure to free
 * Return: 0.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d);
}
