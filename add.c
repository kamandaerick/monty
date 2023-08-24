#include "monty.h"
/**
 * add - add the last two elements of a stack
 * @stack: the stack
 * @line_no: the line number containing the function
 */
void add(stack_t **stack, unsigned int line_no)
{
	stack_t *temp1;
       	stack_t *temp2;

	(void) stack;
	if (arguments->stack_len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_no);
		free_all();
		exit(EXIT_FAILURE);
	}
	temp1 = arguments->head;
	temp2 = temp1->next;
	temp2->n = temp1->n + temp2->n;
	delete_node();
	arguments->stack_len--;
}
