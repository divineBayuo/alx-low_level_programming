#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 * setting head to NULL
 * @head: head of the list
 * Return: no return
 */

void free_listint2(listint_t **head)
{
	listint_t *curr_loc;
	listint_t *next_loc;

	if (head == NULL)
		return;

	curr_loc = head;

	while (curr_loc != NULL)
	{
		next_loc = curr_loc->next;
		free(curr_loc);
		curr_loc = next_loc;
	}
	*head = NULL;
}
