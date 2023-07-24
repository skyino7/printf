#include "main.h"

/**
 * _integer - function
 * @format: string input
 * @pcount: character counter for the printf return
 * @arg: va_list
 * Return: 1
 */

int _integer(const char *format, va_list arg, int *pcount)
{
	int Tens = 1;
	unsigned int cpy;
	unsigned int num;
	signed int holder = (signed int)va_arg(arg, int);

	(void)format;
	if (holder <= 2147483647 || holder > -2147483648)
	{
		if (holder < 0)
		{

			_putchar('-');
			*pcount += 1;
			num = holder * -1;
		}
		else
			num = holder;
		cpy = num;
		while (cpy > 9)
		{
			Tens *= 10;
			cpy = cpy / 10;
		}

		while (num > 9 || Tens > 1)
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

	return (0);
}
