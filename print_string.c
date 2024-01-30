#include <unistd.h>
#include "main.h"
#include <stdlib.h>
/**
 * print_string - Prints a given string
 *
 * @str: String pointer
 *Return: The string
 */
int print_string(char *str)
{
	int count;

	count = 0;
	if (str == NULL)
	{
		str = "(null)";
		return (count);
	}
	while (*str)
	{
		count += write(1, str++, 1);
	}
	return (count);
}
