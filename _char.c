#include "main.h"

/**
 * _char - prints character and increment pcount
 * @c: character input
 * @pcount: character counter for the printf return
 */

void _char(char *format, va_list arg, int *pcount)
{
	char c = va_arg(arg, int);

	(void)format;
	_putchar(c);
	*pcount += 1;
}
