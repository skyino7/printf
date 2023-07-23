#include "main.h"

/**
 * _char - prints character and increment pcount
 * @c: character input
 * @pcount: character counter for the printf return
 */

void _char(char *format, va_list arg, int *pcount)
{
	(void)format;
	char c = va_arg(arg, int);

	_putchar(c);
	*pcount += 1;
}
