#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning
 *               of a listint_t list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	list_t *new_pointer;
	
	new_pointer = malloc(sizeof(listint_t));
	
	if (new_pointer == NULL)
		return (NULLL);

	new_pointer -> n = n;
	new_pointer -> next = *head;
	
	*head = new_pointer;

	return (new-pointer);

}
