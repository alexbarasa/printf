#include <unistd.h>
/**
 * _putchar - Prints the given characters
 *
 * @c: Character pinter
 */
void _putchar(char c)
{
	write(1, &c, 1);
}
