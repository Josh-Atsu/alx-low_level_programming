#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates new dog structure
 * @name: name of dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: of copy of the dog structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *m;

	m = malloc(sizeof(dog_t));
	if (m == NULL)
	{
		free(m);
		return (NULL);
	}
	m->name = name;
	if (m->name == NULL)
	{
		free(m->name);
		free(m);
		return (NULL);
	}
	m->age = age;
	m->owner = owner;
	if (m->owner == NULL)
	{
		free(m->owner);
		free(m->name);
		free(m);
		return (NULL);
	}
	return (m);
}
