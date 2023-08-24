#include "monty.h"
/**
 * pall - print all elements in a stack
 * @stack: stack implemented by a linked list
 * @line_no: the number of line that contains an opcode
 */
void pall(stack_t **stack, unsigned int line_no)
{
	stack_t *temp;
	(void) line_no;
	(void) stack;

	if (arguments->head == NULL)
		return;
	temp = arguments->head;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
