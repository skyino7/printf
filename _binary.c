#include "main.h"

/**
 * _b -  unsigned int argument is converted to binary
 *
 * @format: input
 * @arg: va_list input
 * @pcount: counter pointer
 * Return: flag
 */

int _b(const char *format, va_list arg, int *pcount)
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
		buffer[length] = (num % 2) + '0';
		num /= 2;
		length++;
	}
	while (length > 0)
	{
		_putchar(buffer[--length]);
		*pcount += 1;
	}
	return (1);
}
