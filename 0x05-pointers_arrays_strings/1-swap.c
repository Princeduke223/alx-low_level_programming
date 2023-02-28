#include <stdio.h>
#include "main.h"

/**
 * swap_int - swips *a with *b
 * @a: variable of *a
 * @b: variable of *b
 * @i: variable for swaping *a and *b
 * return:swiped numbers
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
