#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_nd = malloc(sizeof(listint_t));
	listint_t *temp = *head;

	if (!new_nd)
		return (NULL);

	new_nd->next = NULL;
	new_nd->n = n;

	if (*head == NULL)
	{
		*head = new_nd;
		return (new_nd);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new_nd;

	return (new_nd);
}
