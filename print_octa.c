#include <stdarg.h>
#include "main.h"
#include <unistd.h>
/**
 * print_octal - Prints the digits of a given number in base 8 (octal)
 *
 * @n: Long integer
 * @base: Interger for the base to be converted to
 * Return: The number of characters printed
 */
int print_octal(long n, int base)
{
	int count = 0;

	if (n < 0)
	{
		write(1, "-", 1);
		count++;
		n = -n;
	}
	if (n < base)
	{
		count += _putchar('0' + n);
	}
	else
	{
		count += print_octal(n / base, base);
		count += _putchar('0' + (n % base));
	}
	return (count);
}

