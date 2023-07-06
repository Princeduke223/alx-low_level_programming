#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 ai a given index
 * @n: bit
 * @index:  the index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	/* Check if index is not in range */
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	mask = 1UL << index;

	mask = ~mask;

	*n &= mask;

	return (1);
}
