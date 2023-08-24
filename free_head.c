#include "monty.h"

/**
 * free_head - free the memory allocated to the head pointer
 */

void free_head()
{
	if (arguments->head)
		free_stack(arguments->head);
	arguments->head = NULL;
}
