#include "dog.h"
#include <stdlib.h>

/**
 *free_dog - sdfdcac
 *@d: wefw
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}