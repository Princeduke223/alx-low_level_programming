#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - Prints a struct dog.
 * @d: The struct dog to be printed.
 */
void print_dog(struct dog *d)
{
1-init_dog.c if (d == NULL)
1-init_dog.c 1-init_dog.c return;

1-init_dog.c if (d->name == NULL)
1-init_dog.c 1-init_dog.c printf("Name: (nil)\n");
1-init_dog.c else
1-init_dog.c 1-init_dog.c printf("Name: %s\n", d->name);

1-init_dog.c if (d->age < 0)
1-init_dog.c 1-init_dog.c printf("Age: (nil)\n");
1-init_dog.c else
1-init_dog.c 1-init_dog.c printf("Age: %f\n", d->age);

1-init_dog.c if (d->owner == NULL)
1-init_dog.c 1-init_dog.c printf("Owner: (nil)\n");
1-init_dog.c else
1-init_dog.c 1-init_dog.c printf("Owner: %s\n", d->owner);
}
