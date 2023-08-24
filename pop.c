#include "monty.h"
/**
 * pop - deletes the last element of a stack
 * @stack: a stack whose element to delete
 * @line_no: the line number containing the pop function
 */
void pop(stack_t **stack, unsigned int line_no)
{
	(void) stack;
	if (arguments->head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_no);
		free_all();
		exit(EXIT_FAILURE);
	}

	delete_node();
	arguments->stack_len--;
}
