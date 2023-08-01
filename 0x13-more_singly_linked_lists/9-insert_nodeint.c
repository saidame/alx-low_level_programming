#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at given index
 * @head: pointer to the first node
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_nd = malloc(sizeof(listint_t));
	listint_t *nd = *head;

	new_nd = malloc(sizeof(listint_t));
	if (!new_nd || !head)
		return (NULL);

	new_nd->n = n;
	new_nd->next = NULL;

	if (idx == 0)
	{
		new_nd->next = *head;
		*head = new_nd;
		return (new_nd);
	}

	for (i = 0; nd && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new_nd->next = nd->next;
			nd->next = new_nd;
			return (new_nd);
		}
		else
			nd = nd->next;
	}

	return (NULL);
}
