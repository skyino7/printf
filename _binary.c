#include "main.h"

/**
 * _binary -  unsigned int argument is converted to binary
 * 
 * @fomrat: input
 * @args: va_list input
 * @pcount: counter pointer
 * Return: flag
 */

int _binary(const char *format, va_list arg, int *pcount)
{
    unsigned int num = va_arg(arg, unsigned int);
    int Tens = 1, result = 0;

    (void)format;
    while (num)
    {
        result += (num % 2) * Tens;
        Tens *= 10;
        num /= 2;
    }
    while (result > 9 || Tens > 1)
	{
		_putchar(num / Tens + '0');
		*pcount += 1;
		num = num % Tens;
		Tens /= 10;
	}
	_putchar((num % 10) + '0');
	*pcount += 1;
    return (1);
}