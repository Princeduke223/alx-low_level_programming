#include <stdio.h>
#include "main.h"

void print_alphabet_x10(void)
{
	for (int n = 0; n < 10; n++)
	{
		char let = 'a';
		while (let <= 'z')
		{
			putchar('a');
		}
		putchar('\n');
	}
}
