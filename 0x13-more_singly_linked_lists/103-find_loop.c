#include "lists.h"

/**
 * find_listint_loop - This function detects the presence of 
 * a loop in a linked list.
 * @head: head of a list.
 *
 * Return: a pointer to the node where the loop begins.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *PTR;
	listint_t *prev;

	PTR = head;
	prev = head;
	while (head && PTR && PTR->next)
	{
		head = head->next;
		PTR = PTR->next->next;

		if (head == PTR)
		{
			head = prev;
			prev =  PTR;
			while (1)
			{
				PTR = prev;
				while (PTR->next != head && PTR->next != prev)
				{
					PTR = PTR->next;
				}
				if (PTR->next == head)
					break;

				head = head->next;
			}
			return (PTR->next);
		}
	}

	return (NULL);
}
