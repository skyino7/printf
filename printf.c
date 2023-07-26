#include "main.h"
int _printf(const char *format, ...);
/**
 * _printf - custom version of printf
 * @format: input string which may contain specifiers
 * Return: number of character printed to std output including new line
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0, i, j = 1, k, flag = 0;
	sp output[9] = {{'c', _char}, {'s', _string}, {'%', _module},
		{'i', _integer}, {'d', _integer}, {'b', _b}, {'r', _rev},
		 {'o', _octal}, {'u', _u}};

	if (!format)
		return (-1);
	va_start(args, format);
	(void)flag;
	for (i = 0; format[i] != '\0';)
	{
		if (format == NULL)
			return (-1);
		else if (format[i] == '%')
		{
			if (format[i + j] == '\0' || format[i + j] == ' ')
			{
				return (-1);
			}
			else
			{
				for (k = 0; k < 9; k++)
				{
					if (output[k].spesifier == format[i + j])
						flag = output[k].function(format, args, &count);
				}
				if (flag == 0)
				{
					_putchar(format[i]);
					_putchar(format[i + j]);
					count += 2;
				}
				i += j + 1;
				j = 1;
			}
		}
		else
		{
			_putchar(format[i]);
			i++;
			count++;
		}
	}
	return (count);
}
