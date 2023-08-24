#include "monty.h"
/**
 * initialize_args - this function initializes a ptr to struct args_t
 */
void initialize_args()
{
	arguments = malloc(sizeof(arg_t));
	if (arguments == NULL)
		ma_error();
	arguments->instruction = malloc(sizeof(instruction_t));
	if (arguments->instruction == NULL)
		ma_error();
	arguments->stream = NULL;
	arguments->stack = 1;
	arguments->head = NULL;
	arguments->no_of_tokens = 0;
	arguments->line_no = 0;
	arrguments->line = NULL;
	arguments->stack_len = 0;
}
