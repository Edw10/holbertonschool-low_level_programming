#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print dog struct
 * @d: pointer to dog struct
 */

void print_dog(struct dog *d)
{
	if (!d)
		return;
	if (!(d->name))
		printf("Name: (nil)");
	else
		printf("Name: %s", d->name);
	if (!(d->age))
		printf("(nil)");
	else
		printf("Age: %f", d->age);
	if (!(d->Owner))
		printf("(nil)");
	else
		printf("Owner: %s", d->owner);


}
