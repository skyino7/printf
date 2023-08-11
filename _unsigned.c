#include "main.h"

/**
 * _u - unsigned int
 * @format: string input
 * @pcount: character counter for the printf return
 * @arg: va_list
 * Return: 1
 */

int _u(const char *format, va_list arg, int *pcount)
{
	int Tens = 1;
	unsigned int cpy;
	unsigned int num;
	unsigned int holder = va_arg(arg, unsigned int);

	(void)format;
    if (holder == 0)
    {
        _putchar('0');
        *pcount += 1;
        return (1);
    }
	if (holder <= 4294967295)
	{
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
