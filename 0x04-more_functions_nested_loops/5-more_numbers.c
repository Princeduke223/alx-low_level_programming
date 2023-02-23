#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * more_numbers - prints 10 times the number since 0 upto 14
 * Return: 10 times the numbers since 0 up to 14
 */
void more_numbers(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
	for (y = 0; y <= 14; y++)
	{
		if (y > 9)
		{
			_putchar((y / 10) + '0');
		}
		_putchar((y % 10) + '0');
	}
	_putchar('\n');
	}
}
