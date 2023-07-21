#include "main.h"

/**
 * _char - prints character and increment pcount
 * @c: character input
 * @pcount: character counter for the printf return
 */

void _char(char c, int *pcount)
{
	_putchar(c);
	*pcount += 1;
}
