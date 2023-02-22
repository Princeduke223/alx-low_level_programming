#include <stdio.h>
#include "main.h"

void print_alphabet_x10(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		char c;

		for (c = 'a'; c <= 'z'; c++)
		{
			putchar(c);
		}
		putchar('\n');
	}
}
