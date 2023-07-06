#include "main.h"
/**
 * flip_bits - will  flip bits to get from one number to another
 * @n: the first integer
 * @m: the second int
 * Return: the number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int bit_count = 0;

	while (xor_result > 0)
	{
		if (xor_result & 1)
		{
			bit_count++;
		}
		xor_result >>= 1;
	}

	return (bit_count);
}
