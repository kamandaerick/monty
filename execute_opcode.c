#include "monty.h"
/**
 * execute_opcode - executes an Opcode
 */
void execute_opcode(void)
{
	stack_t *stack = NULL;

	if (arguments->no_of_tokens == 0)
		return;
	arguments->instruction->f(&stack, arguments->line_no);
}
