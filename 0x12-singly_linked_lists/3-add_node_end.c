#include "lists.h"

/**
 * add_node_end - adds a new node at the end
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_n, *temp;
	size_t n_char;

	new_n = malloc(sizeof(list_t));
	if (new_n == NULL)
		return (NULL);

	new_n->str = strdup(str);

	for (n_char = 0; str[n_char]; n_char++)
		;

	new_n->len = n_char;
	new_n->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = new_n;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_n;
	}

	return (*head);
}
