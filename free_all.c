#include "monty.h"
/**
 * free_all - frees the memory allocated to all aruments
 */
void free_all(void)
{
	close_file_stream();
	free_tokens();
	free_args();
}
