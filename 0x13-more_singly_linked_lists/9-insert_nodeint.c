#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new
 * node at a given position
 * @head: head of the linked list
 * @idx: index of the list where node should be added = 0
 * @n: n element of list
 * Return: address of the new node, NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_add;
	listint_t *h;
	unsigned int ind;

	h = *head;

	if (idx != 0)
	{
		for (ind = 0; ind < idx - 1 && h != NULL; ind++)
		{
			h = h->next;
		}
	}

	if (h == NULL && idx != 0)
		return (NULL);

	new_add = malloc(sizeof(listint_t));

	if (new_add == NULL)
		return (NULL);

	new_add->n = n;

	if (idx == 0)
	{
		new_add->next = *head;
		*head = new_add;
	}
	else
	{
		new_add->next = h->next;
		h->next = new_add;
	}

	return (new_add);
}
