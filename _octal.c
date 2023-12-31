#include "main.h"

/**
 * _octal -  unsigned int argument is converted to base 8
 *
 * @format: input
 * @arg: va_list input
 * @pcount: counter pointer
 * Return: flag
 */

int _octal(const char *format, va_list arg, int *pcount)
{
	unsigned int num = va_arg(arg, unsigned int);
	int length = 0;
	char buffer[33];

	(void)format;
	if (num == 0)
	{
		_putchar('0');
		*pcount += 1;
	}
	while (num)
	{
		buffer[length] = (num % 8) + '0';
		num /= 8;
		length++;
	}
	while (length > 0)
	{
		_putchar(buffer[--length]);
		*pcount += 1;
	}
	return (1);
}
