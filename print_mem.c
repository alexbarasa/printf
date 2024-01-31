#include <stdarg.h>
#include "main.h"
#include <unistd.h>
#include <stdint.h>

/**
 * print_memory_address - Prints the memory address of a given pointer.
 *
 * @ptr: Pointer to be printed
 * Return: The number of characters printed
 */
int print_memory_address(void *ptr)
{
	uintptr_t address = (uintptr_t)ptr;
	int count = 0;
	char *symbols = "0123456789abcdef";
	char buffer[20];
	int start = 0, i;
	
	buffer[0] = '0';
	buffer[1] = 'x';
	count += 2;
	for (i = (sizeof(uintptr_t) * 2) - 1; i >= 0; i--)
	{
		if (((address >> (i * 4)) & 0xf) != 0)
		{
			start = i;
			break;
		}
	}
	for (i = start; i >= 0; i--)
	{
		buffer[count++] = symbols[(address >> (i * 4)) & 0xf];
	}
	buffer[count] = '\0';
	write(1, buffer, count);
	return count;
}

