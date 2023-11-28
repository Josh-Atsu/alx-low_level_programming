#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - new data type
 * @name: nmae of dog
 * @age: age of dog
 * @owner: the owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - new name for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* dog.h */
