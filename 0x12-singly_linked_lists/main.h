#ifndef MAIN_H
#define MAIN_H

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

#endif /* MAIN_H */
