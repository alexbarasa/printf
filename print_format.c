#include <stdarg.h>
#include <unistd.h>
#include "main.h"
/**
 * print_format - checks for a specified format then prints the
 * passed format
 *
 * @specifier: Data type specifier
 * @args_ptr: Arguments pointer
 * Return: The characters to be printed
 */
int print_format(char specifier, va_list args_ptr)
{
	int count;

	count = 0;
	if (specifier == 'c')
		count = _putchar(va_arg(args_ptr, int));
	else if (specifier == 's')
		count = print_string(va_arg(args_ptr, char *));
	else if (specifier == 'd' || specifier == 'i')
		count = print_digit((long)va_arg(args_ptr, int), 10);
	else if (specifier == 'x')
		count = print_digit((long)va_arg(args_ptr, unsigned int), 16);
	else if (specifier == 'b')
		count = print_digit((long)va_arg(args_ptr, unsigned int), 2);
	else if (specifier == '%')
		count += _putchar('%');
	else if (specifier == 'X')
		count = print_hexa((long)va_arg(args_ptr, unsigned int), 16);
	else if (specifier == 'o')
		count = print_octal((long)va_arg(args_ptr, unsigned int), 8);
	else if (specifier == 'u')
		count = print_hexa((long)va_arg(args_ptr, unsigned int), 10);
	else if (specifier == 'p')
		count = print_memory_address(va_arg(args_ptr, void *));
	else if (specifier == 'S')
		count = print_special_string(va_arg(args_ptr, char *));
	else
	{
		_putchar('%');
		count += write(1, &specifier, 1);
	}
	return (count);
}
