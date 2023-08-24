#include "monty.h"
/**
* delete_node - deletes the top node of a stack
*/
void delete_node(void)
{
	stack_t *temp;

	temp = arguments->head;
	arguments->head = temp->next;
	free(temp);
}
