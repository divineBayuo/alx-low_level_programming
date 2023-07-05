#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a
 * listint_t linked list and returns the head node's data (n)
 * @head: head of the linked list
 * Return: the head node's data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *temp1;
	listint_t *temp2;
	int save_n;

	if (head == NULL || *head == NULL)
		return (0);

	temp1 = *head;

	temp2 = temp1->next;

	save_n = temp1->n;

	free(temp1);

	*head = temp2;

	return (save_n);
}
