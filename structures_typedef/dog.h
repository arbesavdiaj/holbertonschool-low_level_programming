#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Short description
 * @name: hello
 * @age: age
 * @owner: owner
 *
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
