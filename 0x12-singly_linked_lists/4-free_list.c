#include "lists.h"

/**
 * free_list - function that frees a list_t list
 * @head: pointer to the list
 * Return: no return
 */

void free_list(list_t *head)
{
	list_t *copy;

	while ((copy = head) != NULL)
	{
		head = head->next;
		free(copy->str);
		free(copy);
	}
}
