#include <unistd.h>

/**
 * _putchar writes the character a to stdout
 * @a: The character to be printed out
 *
 * Return: 1 on success.
 * On error, -1 is returned, and set errno appropriately.
 */

int _putchar(char a)
{
	return (write(1, &a, 1));
}
