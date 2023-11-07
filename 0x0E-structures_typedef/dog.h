#ifndef DOG_H
#define DOG_H
/**
 * struct dog - poppy
 * @name: name of dogs
 * @age: age of dogs
 * @owner: owner of dogs
 *
 * Description: a new type struct dog with the above elements
 */

struct dog
{
	char *name;
	float age;
	char *owner;

};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
