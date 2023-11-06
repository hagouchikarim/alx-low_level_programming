#include "dog.h"

/**
 * init_dog - Initialize a variable of type struct dog.
 * @d: Pointer to struct type dog
 * @name: name's dog
 * @age: age's dog
 * @owner: owner's dog
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

