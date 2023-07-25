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
	int Tens = 1;
	unsigned int result = 0;

	(void)format;
	while (num)
	{
		result += (num % 2) * Tens;
		Tens *= 10;
		num /= 2;
	}
	Tens /= 10;
	while (result > 9 || Tens > 1)
	{
		_putchar(result / Tens + '0');
		*pcount += 1;
		result = result % Tens;
		Tens /= 10;
	}
	_putchar((result % 10) + '0');
	*pcount += 1;
	return (1);
}
