#include "main.h"
#include <stdio.h>
#include <unistd.h>
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
