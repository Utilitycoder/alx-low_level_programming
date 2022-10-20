#include <unistd.h>

/**
 * _putchar writes the character c to stdout
 * @c: the character to be printed out
 *
 * Return: 1 on success.
 * On error, -1 is returned and set errno appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
