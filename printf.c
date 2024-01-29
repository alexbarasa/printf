#include <stdarg.h>
#include <unistd.h>
#include "main.h"
#include <stdlib.h>
/**
 * _printf - Prints output acording to the passed format
 *
 * @format: Pointer to the specified format
 * Return: Always 0 (Success)
 */
int _printf(const char *format, ...)
{
	va_list dp; /* Declaring a list of arguments */
	int c;
	char *s;

	va_start(dp, format); /* Starting the list from format */
	if (format == NULL)
		return (1);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				c = va_arg(dp, int);
				_putchar(c);
			}
			else if (*format == 's')
			{
				s = va_arg(dp, char *);
				while (*s != '\0')
				{
					_putchar(*s);
					s++;
				}
			}
			else if (*format == '%')
			{
				_putchar('%');
			}
		}
		else
		{
			_putchar(*format);
		}
		format++;
	}
	return (0);
}
