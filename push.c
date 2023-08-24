#include "monty.h"
/**
 * push - adds an element on top of a stack
 * @stack: the stack
 * @line_no: the line containing the push function
 */
void push(stack_t **stack, unsigned int line_no)
{
	stack_t *temp;

	if (arguments->no_of_tokens <= 1 || !(is_int(arguments->tokens[1])))
	{
		free_args();
		fprintf(stderr, "L%d: usage: push integer\n", line_no);
		exit(EXIT_FAILURE);
	}

	*stack = malloc(sizeof(stack_t));
	if (*stack == NULL)
		ma_error();
	(*stack)->next = (*stack)->prev = NULL;
	(*stack)->n = (int) atoi(arguments->tokens[1]);
	if (arguments->head == NULL)
		arguments->head = *stack;
	else
	{
		if (arguments->stack)
		{
			(*stack)->next = arguments->head;
			arguments->head->prev = *stack;
			arguments->head = *stack;
		}
		else
		{
			temp = arguments->head;
			while (temp->next)
				temp = temp->next;
			temp->next = *stack;
			(*stack)->prev = temp;
		}
	}
	arguments->stack_len++;
}
