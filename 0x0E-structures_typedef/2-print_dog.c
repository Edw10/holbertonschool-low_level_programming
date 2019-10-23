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
	if ((!(d->name)) || (strcmp(d->name, "") == 0))
		printf("(nil)\n");
	else
		printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	if (!(d->owner))
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);


}
