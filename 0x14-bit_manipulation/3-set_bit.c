#include "main.h"
/**
 * set_bit - will  set the value of a bit to 1 at a given index
 * @n: unsigned integer pointer n
 * @index: is the index, starting from 0 of the bit you want to set
 * Return: Always 0.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;


	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	mask = 1UL << index;
	*n |= mask;

	return (1);/*done*/
}
