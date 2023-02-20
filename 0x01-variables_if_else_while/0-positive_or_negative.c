#include <stdio.h>
#include <stdlib.h>
#include <time.h>

	int main(void) 
{
int a = 0;

srand(time(NULL));
a = rand() % 98 - 98;
	if (a > 0) 
{
printf("%d is positive\n", a);
}
	else if (a == 0) 
{
printf("%d is zero\n", a);
}
	else 
{
printf("%d is negative\n", a);
}
return (0);
}
