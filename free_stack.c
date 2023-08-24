#include "monty.h"

/**
* free_stack - free memory allocated to the stack
* @head: first node of the stack
*/
void free_stack(stack_t *head)
{
	if (head == NULL)
		return;
	if (head->next != NULL)
	{
		free_stack(head->next);
	}
	free(head);
}
