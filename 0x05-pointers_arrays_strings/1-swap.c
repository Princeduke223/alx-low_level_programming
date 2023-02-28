#include <stdio.h>
#include "main.h"

/**
 * swap_int - swips *a with *b
 * @a: variable of *a
 * @b: variable of *b
 * @temp: variable for swaping *a and *b
 * return:swiped numbers
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
