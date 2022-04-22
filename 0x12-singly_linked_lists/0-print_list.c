#include "lists.h"

/**
 * print_list - prints all the elements
 * of a linked list
 * @h: head of the list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *next_element = h;
	size_t count = 0;

	while (next_element != NULL)
	{
		if (next_element->str != NULL)
			printf("[%d] %s\n", next_element->len, next_element->str);
		else
			printf("[0] (nil)\n");
		count += 1;
		next_element = next_element->next;
	}
	return (count);
}
