#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * This if statement checks whether the value of a is positive 0 or negative.
If a is greater than 0, it sets a is positive.
else is a is less than 0, it sets the a is negative.Otherwise, it
sets a is negative.
*/

/*
 * This is the main function of the program.
 * It generates a random number between -10 and 10,
 * and prints whether the number is positive, negative, or zero.
 */
int main(void)
{
int n = 0;

srand(time(NULL));
n = rand() % 98 - 98;
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is negative\n", n);
}
return (0);
}
