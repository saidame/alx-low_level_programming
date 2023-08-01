#include "lists.h"

/**
 * print_listint - prints a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t x = 0;

	while (h)
	{
		h = h->next;
		x++;
	}

	return (x);
}
