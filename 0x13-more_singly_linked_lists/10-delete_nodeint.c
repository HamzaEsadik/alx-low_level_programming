#include "lists.h"
/**
 * delete_nodeint_at_index - delete node at index position
 * @head: pointer to the list
 * @index: index
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *delete;
	listint_t *ptr = *head;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(ptr);
		return (1);
	}
	for (i = 0; i < index - 1; ++i)
	{
		if (ptr->next == NULL)
			return (-1);
		ptr = ptr->next;
	}
	delete = ptr->next;
	ptr->next = delete->next;
	free(delete);
	return (1);
}
