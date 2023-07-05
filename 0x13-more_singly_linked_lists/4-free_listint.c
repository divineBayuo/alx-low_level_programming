#include "lists.h"

/**
 * free_listint - function that frees a listint_t list
 * @head: head of the list
 * Return: no return
 */

void free_listint(listint_t *head)
{
	listint_t *copy;

	copy = head;

	while ((copy != NULL)
	{
		head = head->next;
		free(copy);
	}
}
