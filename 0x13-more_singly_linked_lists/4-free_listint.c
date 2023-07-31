#include "lists.h"
/**
 * free_listint - frees the list
 * @head: pointer to the list
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (ptr != NULL)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
