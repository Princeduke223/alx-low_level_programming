#include "function_pointers.h"

/**
 * array_iterator - Executes a function given as a
 *                  parameter on each element of an array.
 * @array: The array.
 * @size: The size of array.
 * @action: A pointer to the function to be executed.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
0-print_name.c if (array == NULL || action == NULL)
0-print_name.c 0-print_name.c return;

0-print_name.c while (size-- > 0)
0-print_name.c {
0-print_name.c 0-print_name.c action(*array);
0-print_name.c 0-print_name.c array++;
0-print_name.c }
}
