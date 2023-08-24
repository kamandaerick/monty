#include "monty.h"
/**
 * swap - swap the last two elelements of a stack
 * @stack: the stack
 * @line_no: the line number in which the swa function is called
 */
void swap(stack_t **stack, unsigned int line_no)
{
	stack_t *temp1;
	stack_t *temp2;

	(void) stack;
	if (arguments->stack_len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_no);
		free_all();
		exit(EXIT_FAILURE);
	}
	temp1 = arguments->head;
	temp2 = temp1->next;
	temp1->next = temp2->next;
	if (temp1->next)
		temp1->next->prev = temp1;
	temp2->next = temp1;
	temp1->prev = temp2;
	temp2->prev = NULL;
	arguments->head = temp2;
}
