#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node
 * at index of a listint_t linked list
 * @head: head of the linked list
 * @index: index of the node that should be deleted
 * Return: 1 if success, -1 if fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int ind;
	listint_t *after;
	listint_t *before;

	before = *head;

	if (index != 0)
	{
		for (ind = 0; ind < index - 1 && before != NULL; ind++)
		{
			before = before->next;
		}
	}

	if (before == NULL || (before->next == NULL && index != 0))
		return (-1);

	after = before->next;

	if (index != 0)
	{
		before->next = after->next;
		free(after);
	}
	else
	{
		free(before);
		*head = after;
	}

	return (1);
}
