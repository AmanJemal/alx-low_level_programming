#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *curr_n;

	if (head != NULL)
	{
		curr_n = *head;
		while ((temp = curr_n) != NULL)
		{
			curr_n = curr_n->next;
			free(temp);
		}
		*head = NULL;
	}
}
