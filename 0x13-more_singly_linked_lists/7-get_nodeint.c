#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth
 * node of a listint_t linked list
 * @head: head of the linked list
 * @index: index of the node, starting at 0
 * Return: node or NULL if the node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int ind;

	for (ind = 0; ind < index && head != NULL; ind++)
	{
		head = head->next;
	}
	return (head);
}
