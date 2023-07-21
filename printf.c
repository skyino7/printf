#include "main.h"
/**
 * _printf - cutom version of printf
 * @format: input string which may contain specifiers
 * Return: number of character printed to std output including new line
 */
int _printf(const char *format, ...)
{
    /*char buffer[1024];*/
	va_list args;
	char c, *str;
	int count = 0, i, j = 1, num;

	va_start(args, format);

	for (i = 0; format[i];)
	{
		if (format[i] == '%')
		{
			if (format[i + j] == ' ')
				j++;
			else if (format[i + j] == 'c')
			{
				c = va_arg(args, int);
				_char(c, &count);
				i += j + 1;
				j = 1;
			}
			else if (format[i + j] == 's')
			{
				str = va_arg(args, char *);
				_string(str, &count);
				i += j + 1;
				j = 1;
			}
			else if (format[i + j] == '%')
			{
				_putchar('%');
				count++;
			}
			else if (format[i + j] == 'd' || format[i + j] == 'i')
			{
				num = va_arg(args, int);
				_integer(num, &count);
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
