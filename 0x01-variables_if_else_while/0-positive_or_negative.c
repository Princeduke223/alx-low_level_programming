#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * This if statement checks whether the value of x is greater than 10.
If x is greater than 10, it sets the value of y to 1. Otherwise, it
sets the value of y to 0.
*/

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
