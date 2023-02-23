#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * _isupper - check a letter if is upper
 * @x: the number to be checked
 * Return: 1 for upper letters or 0 for else
 */
int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}
	return (0);
}
