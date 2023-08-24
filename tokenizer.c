#include "monty.h"
/**
 * tokenizer - tokenizes/parses a line into indpendent strings
 */
void tokenizer(void)
{
	int i = 0;
	char *token = NULL;
	char *line_copy = NULL;

	line_copy = malloc(sizeof(char) * (strlen(arguments->line) + 1));
	strcpy(line_copy, arguments->line);
	arguments->no_of_tokens = 0;
	token = strtok(line_copy, " \n");
	while (token)
	{
		arguments->no_of_tokens += 1;
		token = strtok(NULL, " \n");
	}

	arguments->tokens = malloc(sizeof(char *) * (arguments->no_of_tokens + 1));
	strcpy(line_copy, arguments->line);
	token = strtok(line_copy, " \n");
	while (token)
	{
		arguments->tokens[i] = malloc(sizeof(char) * (strlen(token) + 1));
		if (arguments->tokens[i] == NULL)
			ma_error();
		strcpy(arguments->tokens[i], token);
		token = strtok(NULL, " \n");
		i++;
	}
	arguments->tokens[i] = NULL;
	free(line_copy);
}
