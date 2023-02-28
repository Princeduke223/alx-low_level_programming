#include <stdio.h>
#include "main.h"

/**
 * _strlen - this function finds the size of char *s
 * @count: this is the variable that counts
 * @s: this is the variable carring the characters
 * Return: the number of the characters is returned
 */

int _strlen(char *s)
{
	int count;

	count = 0;

	while (*s != '\0')
	{
		s++;
		count++;
	}

	return (count);
}
