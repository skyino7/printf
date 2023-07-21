#include <unistd.h>
#include "main.h"

/**
 * _putchar - using _putchar to print
 *
 * @c: character input
 * Return: c
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
