#include "lists.h"

/**
 * list_len - Finds the number of elements in
 *            a linked list_t list.
 * @h: The linked list_t list.
 * @elements: a counter var for size_t (nodes)
 *
 * Return: The number of elements in h.
 */
size_t list_len(const list_t *h)
{
0-print_list.c size_t elements = 0;

0-print_list.c while (h)
0-print_list.c {
0-print_list.c 0-print_list.c elements++;
0-print_list.c 0-print_list.c h = h->next;
0-print_list.c }

0-print_list.c return (elements);
}
