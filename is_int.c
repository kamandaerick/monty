#include "monty.h"
/**
 * is_int - checks is a given string is an int
 * @value: the value to checl
 * Return: 1 of it is an int and 0 if it is not
 */
int is_int(char *value)
{
	int i = 0;

	while (value[i])
	{
		if (i == 0 && value[i] == '-' && value[i + 1])
		{
			i++;
			continue;
		}
		if (value[i] < '0' || value[i] > '9')
			return (0);
		i++;
	}

	return (1);
}
