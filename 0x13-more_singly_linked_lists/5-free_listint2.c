#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 * setting head to NULL
 * @head: head of the list
 * Return: no return
 */

void free_listint2(listint_t **head)
{
	listint_t *curr;
	listint_t *next;

	if (head == NULL)
		return;

	curr = *head;

	while (curr != NULL)
	{
		next = curr->next;
		free(curr);
		curr = next;
	}
	*head = NULL;
}
