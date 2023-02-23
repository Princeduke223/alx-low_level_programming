#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * _isdigit - check if character is a digit
 * @c:the character t be checked
 * Return: 1 for a character that is a digit or zero for any else
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
