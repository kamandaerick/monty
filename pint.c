#include "monty.h"
/**
 * pint - prints the last value of a stack
 * @stack:the stack
 * @line_no: the line number containing the pint function
 */

void pint(stack_t **stack, unsigned int line_no)
{
	(void) stack;
	if (arguments->head == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_no);
		free_all();
		exit(EXIT_FAILURE);
	}

	printf("%d\n", arguments->head->n);
}
