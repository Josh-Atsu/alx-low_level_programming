#include "dog.h"
/**
 * init_dog - initializes the variabled declared in the struct
 * @d: the struct and pointer to the struct
 * @name: the name of the dog
 * @age: age of dog
 * @owner: the owner of the dog
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	(*d).age = age;
	(*d).owner = owner;
}
