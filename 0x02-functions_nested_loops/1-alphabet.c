#include <stdio.h>
#include "main.h"

void print_alphabet(void)
{
	char c = 'a';
	
	while (c <= 'z')
	{
	     	putchar(c);
		putchar ('\n');
		c++;
	}
}
