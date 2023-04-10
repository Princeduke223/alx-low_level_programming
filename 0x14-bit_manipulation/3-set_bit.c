#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at the given index
 * @n: pointer to the number to set the bit in
 * @index: the index of bit to set
 *
 * Return: 1 if it worked or -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
