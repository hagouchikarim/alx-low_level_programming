#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <string.h>

/**
 * struct list_s - Singly Linked List Node
 * @str: Dynamic string (malloc'ed)
 * @len: Length of the string
 * @next: Pointer to the next node
 *
 * Description: Defines a node for a singly linked list.
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *header);
size_t list_len(const list_t *header);
list_t *add_node(list_t **header, const char *str);
list_t *add_node_end(list_t **header, const char *str);
void free_list(list_t *header);

/* END OF LISTS_H */
#endif

