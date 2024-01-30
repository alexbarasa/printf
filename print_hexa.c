#include <stdarg.h>
#include "main.h"
#include <unistd.h>

/**
 * print_hexa - Prints the digits of a given number either
 * in base 10 (decimal), base 16 (hexadecimal) or base 2 (binary)
 *
 * @n: Long integer
 * @base: The base to be converted to
 * Return: The number of characters printed
 */
int print_hexa(long n, int base)
{
	int count = 0;
	char *symbols = "0123456789ABCDEF";
	
	if (n < 0)
	{
		write(1, "-", 1);
		count++;
		n = -n;
	}
	if (n < base)
	{
		count += _putchar(symbols[n]);
	}
	else
	{
		count += print_hexa(n / base, base);
		count += _putchar(symbols[n % base]);
	}
	return (count);
}

