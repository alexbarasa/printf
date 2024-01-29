#include <stdarg.h>
#include <unistd.h>
#include "main.h"
/**
 * _printf - Prints output acording to the passed format
 *
 * @format: Pointer to the specified format
 * Return: Always 0 (Success)
 */
int _printf(const char *format, ...)
{
	va_list dp; /* Declaring a list of arguments */
	int count = 0, c;
	char *s;

	va_start(dp, format); /* Starting the list from format */
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				c = va_arg(dp, int);
				_putchar(c);
				count++;
			}
			else if (*format == 's')
			{
				s = va_arg(dp, char *);
				while (*s != '\0')
				{
					_putchar(*s);
					count++;
					s++;
				}
			}
			else if (*format == '%')
			{
				_putchar('%');
				count++;
			}
		}
		else
		{
			_putchar(*format);
			count++;
		}
		format++;
	}
	return (count);
}
