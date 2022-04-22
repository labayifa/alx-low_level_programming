#include "lists.h"

/**
 * list_len - counts the number of nodes in a linked list
 * @h: head of the list
 *
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	const list_t *next_element = h;
	size_t count = 0;

	while (next_element != NULL)
	{
		count += 1;
		next_element = next_element->next;
	}
	return (count);
}
