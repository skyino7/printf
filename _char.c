#include "main.h"

/**
 * _char - prints character and increment pcount
 * @format: string input
 * @pcount: character counter for the printf return
 * @arg: va_list
 * Return: 1
 */

int _char(const char *format, va_list arg, int *pcount)
{
	char c = va_arg(arg, int);

	(void)format;
	_putchar(c);
	*pcount += 1;
	return (1);
}
