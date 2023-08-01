#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at idx position
 * @head: pointer to the list
 * @idx: index
 * @n: data
 * Return: adress of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *ptr = *head;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	return (NULL);
	new->n = n;
	if (idx == 0)
	{
	new->next = *head;
	*head = new;
	return (new);
	}
	for (i = 0; ptr; ++i)
	{
	if (i == idx - 1)
	{
		new->next = ptr->next;
		ptr->next = new;
		return (new);
	}
	ptr = ptr->next;
	}
	free(new);
	return (NULL);
}
