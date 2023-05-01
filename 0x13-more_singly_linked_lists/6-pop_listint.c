#include "lists.h"

/**
 * pop_listint - deletes the head node of
 * a linked list
 * @head: head of a list.
 *
 * Return: head node's data.
 */
int pop_listint(listint_t **head)
{
	int head_node;
	listint_t *h;
	listint_t *curr_n;

	if (*head == NULL)
		return (0);

	curr_n = *head;

	head_node = curr_n->n;

	h = curr_n->next;

	free(curr_n);

	*head = h;

	return (head_node);
}
