#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a
 * listint_t linked list and returns the head node's data (n)
 * @head: head of the linked list
 * Return: the head node's data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);

	temp = *head;
	*head = (*head)->next;

	int save_n = temp->n;

	free(temp);

	return (save_n);
}
