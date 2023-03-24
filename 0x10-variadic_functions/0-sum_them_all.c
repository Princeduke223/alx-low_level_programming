#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
README.md va_list nums;
README.md unsigned int index, sum = 0;

README.md va_start(nums, n);

README.md for (index = 0; index < n; index++)
README.md README.md sum += va_arg(nums, int);

README.md va_end(nums);

README.md return (sum);
}
