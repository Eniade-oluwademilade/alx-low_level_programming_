#include "lists"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_nodeint_at_index - returns nth node of list
 * @head: start of node 
 * @index: index of node an int strarting from 0
 *
 * Return: nth node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
