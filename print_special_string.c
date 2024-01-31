#include <stdio.h>
#include <unistd.h>
/**
 * print_special_string - Prints special characters
 *
 * @str: String pointer
 * Return: The number of characters printed
 */
int print_special_string(const char *str)
{
	const char *ptr = str;
	int count = 0;
	char hex[5];

	while (*ptr)
	{
		if (*ptr >= 32 && *ptr < 127)
		{
			write(1, ptr, 1);
			count++;
		}
		else
		{
			sprintf(hex, "\\x%02X", (unsigned char)*ptr);
			write(1, hex, 4);
			count += 4;
		}
		ptr++;
	}
	return (count);
}

