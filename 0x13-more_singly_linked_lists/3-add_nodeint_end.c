#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at
 * the end of a listint_t list
 * @head: head of the list
 * @n: element of the new node
 * Return: address to the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_end;
	listint_t *temp;

	new_end = malloc(sizeof(listint_t));

	if (new_end == NULL)
		return (NULL);

	new_end->n = n;
	new_end->next = NULL;

	temp = *head;

	if (temp == NULL)
		*head = new_end;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_end;
	}
	return (*head);
}
