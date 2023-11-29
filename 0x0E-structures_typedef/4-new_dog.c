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
	size_t i, j, k = 0;

	if (name == NULL || owner == NULL)
		return (NULL);
	m = malloc(sizeof(dog_t));
	if (m == NULL)
	{
		free(m);
		return (NULL);
	}
	i = 0;
	while (name[i])
	{
		i++;
	}
	i++;
	m->name = malloc(sizeof(char) * i);
	if (m->name == NULL)
	{
		free(m->name);
		free(m);
		return (NULL);
	}
	m->age = age;
	for (j = 0; owner[j]; j++)
		;
	j++;
	m->owner = malloc(sizeof(char) * j);
	if (m->owner == NULL)
	{
		free(m->owner);
		free(m->name);
		free(m);
	}
	for (i = 0; name[i]; i++)
		m->name[k++] = name[i];
	for (j = 0; owner[j]; j++)
		m->owner[j] = owner[j];
	return (m);
}
