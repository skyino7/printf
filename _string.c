#include "main.h"

/**
 * _string - loops through s to print and increment pcount
 * @s: input string
 * @pcount: character counter for _printf to return
 */

void _string(char *s, int *pcount)
{
	int j;

    /*char *s = va_arg(ars, char*);*/
	for (j = 0; s[j] != '\0'; j++)
	{
		_putchar(s[j]);
		*pcount += 1;
	}
}
