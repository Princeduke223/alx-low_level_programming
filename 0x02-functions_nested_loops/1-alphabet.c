#include <stdio.h>
#include "main.h"

void print_alphabet(void)
{
char letter = 'a';
while (letter <= 'z')
{
	putchar(letter);
	letter++;
}
putchar('\n');
}
