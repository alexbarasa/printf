#include <stdarg.h>
#include "main.h"
#include <unistd.h>
/**
 * print_digit - Prints the digits of a given number either
 * in base 10 (decimal), base 16 (hexadecimal) or base 2 (binary)
 *
 * @n: Long integer
 * @base: The base to be converted to
 * Return: Converted number
 */
int print_digit(long n, int base)
{
	int count;
	char *symbols;

	count = 0;
	symbols = "0123456789abcdefABCDEF";
	if (n < 0)
	{
		write(1, "-", 1);
		return (print_digit(-n, base) + 1);
	}
	else if (n < base)
	{
		count = _putchar(symbols[n]);
	}
	else if (n == 0)
		count = '0';
	else
	{
		count = print_digit(n / base, base);
		return (count + print_digit(n % base, base));
	}
	return (0);
}
