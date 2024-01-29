#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"
/**
 * _printf - Prints output acording to the passed format
 *
 * @format: Pointer to the specified format
 * Return: The number of strings printed
 */
int _printf(const char *format, ...)
{
	va_list args_ptr;
	int count;

	va_start(args_ptr, format);
	count = 0;
	if (format == NULL)
		return (1);
	while (*format)
	{
		if (*format == '%')
		{
			count += print_format(*(++format), args_ptr);
		}
		else
			count += write(1, format, 1);
		++format;
	}
	va_end(args_ptr);
	return (count);
}
