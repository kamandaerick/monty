#include "monty.h"
/**
 * ma_error - prints appropriate message when memory allocation fails
 */

void ma_error(void)
{
	fprintf(stderr, "Error: malloc failed\n");
	free_args();
	exit(EXIT_FAILURE);
}
