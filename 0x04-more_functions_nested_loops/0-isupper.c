#include "main.h"
#include <stdio.h>
#include <unistd.h>

int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}
	return (0);
}
