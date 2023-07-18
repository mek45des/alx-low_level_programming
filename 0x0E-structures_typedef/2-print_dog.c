#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 * @d: struct dog
 *
 * Return: no return
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (!(d->name))
			printf("name: (nil)\n");
		else
			printf("name: %s\n", d->name);
		printf("age: %f\n", d->age);

		if (!(d->owner))
			printf("owner: (nil)\n");
		else
			printf("owner: %s\n", d->owner);
	}
}
