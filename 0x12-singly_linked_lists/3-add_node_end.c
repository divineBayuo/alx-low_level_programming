#include "lists.h"

/**
 * add_node_end - function that adds a new node
 * at the end of a list_t list
 * @head: head of the list
 * @str: string of the new node
 * Return: address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	size_t num_char;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (num_char = 0; str[num_char]; num_char++)
		;

	new->len = num_char;
	new->next = NULL;
	temp = *head;

	if (temp == NULL)
		*head = new;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	return (*head);
}
