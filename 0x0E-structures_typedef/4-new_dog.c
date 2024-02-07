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
	size_t i, j;

	if (name == NULL || owner == NULL)
		return (NULL);
	m = malloc(sizeof(dog_t));
	if (m == NULL)
	{
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
		;
	i++;
	m->name = malloc(sizeof(char) * i);
	if (m->name == NULL)
	{
		free(m->name);
		free(m);
		return (NULL);
	}
	for (j = 0; j < i; j++)
		m->name[j] = name[j];
	m->age = age;
	for (j = 0; owner[j]; j++)
		;
	j++;
	m->owner = malloc(sizeof(char) * j);
	if (m->owner == NULL)
	{
		free(m->owner);
		free(m);
		return (NULL);
	}
	for (i = 0; i < j; i++)
		m->owner[i] = owner[i];
	return (m);
}
