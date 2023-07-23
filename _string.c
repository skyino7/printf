#include "main.h"

/**
 * _string - loops through s to print and increment pcount
 * @format: string input
 * @pcount: character counter for the printf return
 * @arg: va_list
 * Return: 1
 */

int _string(const char *format, va_list arg, int *pcount)
{
	int j;
	char *s = va_arg(arg, char *);

	(void)format;
	if (s == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
    /*char *s = va_arg(ars, char*);*/
	for (j = 0; s[j] != '\0'; j++)
	{
		_putchar(s[j]);
	}
	return (j);
}
