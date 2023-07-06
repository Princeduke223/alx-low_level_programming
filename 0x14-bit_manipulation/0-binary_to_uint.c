#include "main.h"
/**
 * binary_to_uint - will convert a binary number to an unsigned integer
 *@b: points to a string of 0 and 1 characters
 * Return:the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		result = result << 1;
		if (*b == '1')
		{
			result = result | 1;
		}
		b++;
	}
	return (result);
}
