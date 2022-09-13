#include <unistd.h>

/**
 * _putchar - writes the c to stdout
 * @c: The char to print
 *
 * Return: On success 1.
 * On error, -l, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(l, &c, l));
}
