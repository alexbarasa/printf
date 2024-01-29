#include <unistd.h>
/**
 * _putchar - Prints the given characters
 *
 * @c: Character pinter
 * Return: Printed characters
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
