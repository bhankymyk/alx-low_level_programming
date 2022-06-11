#include "lists.h"

/**
 * dlistint_len - deduce length of a linked list
 * @h: pointer to the head of list
 * Return: number
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t b;

	for (b = 0; h != NULL; b++)
		h = h->next;

	return (b);
}
