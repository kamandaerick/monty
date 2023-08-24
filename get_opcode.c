#include "monty.h"
/**
 * invalid_opcode - print out a message when an invalid opcode is encountered
 */
void invalid_opcode()
{
	fprintf(stderr, "L%d: unknown instruction %s\n", arguments->line_no, arguments->tokens[0]);
	free_all();
	exit(EXIT_FAILURE);
}


/**
 * get_opcode - gets the instruction to run from the first token.
 */
void get_opcode()
{
	int i = 0;
	instruction_t instructions[] = {
		{"pall", &pall}, {"pop", &pop}, {"nop", &nop},
		{"push", &push}, {"pint", &pint}, {NULL, NULL}
	};

	if (arguments->no_of_tokens == 0)
		return;
	if (arguments->tokens[0][0] == '#')
	{
		arguments->instruction->opcode = "nop";
		arguments->instruction->f = nop;
		return;
	}
	for (i = 0; instructions[i].opcode != NULL; i++)
	{
		if (strcmp(instructions[i].opcode, arguments->tokens[0]) == 0)
		{
			arguments->instruction->opcode = instructions[i].opcode;
			arguments->instruction->f = instructions[i].f;
			return;
		}
	}
	invalid_opcode();
}
