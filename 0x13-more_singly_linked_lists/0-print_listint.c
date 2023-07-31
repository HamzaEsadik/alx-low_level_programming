#include "lists.h"
/**
 * print_listint - print linked list
 * @h: head of linked list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *ptr = h;
	int nodes = 0;

	if (ptr == NULL)
	{
		return (0);
	}
	while (ptr != NULL)
	{
	nodes++;
	printf("%d\n", ptr->n);
	ptr = ptr->next;
	}
	return (nodes);
}
