#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * struct listing - singly linked list
 * @str: string created with malloc()
 * @len: length of string
 * @next: pointer to the next node
 *
 * Description: structure for singly-linked list node
 */
typedef struct listing
{
	char *str;
	unsigned int len;
	struct listing *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif /* LISTS_H */
