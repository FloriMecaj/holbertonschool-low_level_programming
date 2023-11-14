#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *new_name, *new_owner;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_name = malloc(sizeof(*name));
	if (new_name == NULL)
	{
		free(new_name);
		return (NULL);
	}

	new_owner = malloc(sizeof(*owner));
	if (new_owner == NULL)
	{
		free(new_owner);
		return (NULL);
	}

	strcpy(new_name, name);
	strcpy(new_owner, owner);
	new_dog->name = new_name;
	new_dog->age = age;
	new_dog->owner = new_owner;

		return (new_dog);
}
