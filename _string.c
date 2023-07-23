#include "main.h"

/**
 * _string - loops through s to print and increment pcount
 * @format: string input
 * @pcount: character counter for the printf return
 * @arg: va_list
 */

void _string(const char *format, va_list arg, int *pcount)
{	
	int j;
	char *s = va_arg(arg, char *);

	(void)format;
    /*char *s = va_arg(ars, char*);*/
	for (j = 0; s[j] != '\0'; j++)
	{
		_putchar(s[j]);
		*pcount += 1;
	}
}
