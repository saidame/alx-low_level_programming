#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *nd, *temp;

	if (!head)
		return;

	nd = *head;
	while (nd)
	{
		temp = nd;
		nd = nd->next;
		free(temp);
	}

	*head = NULL;
}
