#include "main.h"

/**
 * _module - loops through s to print and increment pcount
 * @format: string input
 * @pcount: character counter for the printf return
 * @arg: va_list
 */

void _module(const char *format, va_list arg, int *pcount)
{
    char c = va_arg(arg, int);

    (void)format;
    _putchar(c);
    *pcount += 1;
}