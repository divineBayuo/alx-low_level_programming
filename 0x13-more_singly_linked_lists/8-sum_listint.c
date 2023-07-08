#include "lists.h"

/**
 * sum_listint - function that returns the sum of all
 * the data (n) of a listint_t linked list
 * @head: the head of the linked list
 * Return: sum of all the data
 */

int sum_listint(listint_t *head)
{
	unsigned int ind;
	unsigned int sum = 0;

	for (ind = 0; head != NULL; ind++)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
