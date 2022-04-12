#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: struct dog variable
 * @name: string
 * @age: float
 * @owner: string
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
