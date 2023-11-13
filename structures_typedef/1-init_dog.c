#include <stddef.h>
#ifndef DOG_H
#define DOG_H

/**
 * init_dog - Short description
 * @name: hello
 * @age: age
 * @owner: owner
 * @d: helloo
 * Description: Longer description
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
#endif
