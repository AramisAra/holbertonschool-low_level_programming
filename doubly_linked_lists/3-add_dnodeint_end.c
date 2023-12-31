#include "lists.h"

/**
 * add_dnodeint_end - add a node at the end
 * @head: head of the list
 * @n: integer type
 *
 * Return: end node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node = *head;

	if (!node)
	{
		*head = add_dnodeint(head, n);
		if (!*head)
		{
			free(*head);
			return (NULL);
		}
		return (*head);
	}
	while (node->next)
		node = node->next;
	node->next = add_dnodeint(&(node->next), n);
	if (!node->next)
	{
		free(node->next);
		return (NULL);
	}
	node->next->prev = node;
	return (node->next);
}
