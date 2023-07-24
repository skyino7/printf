#include "main.h"
/**
 * _printf - custom version of printf
 * @format: input string which may contain specifiers
 * Return: number of character printed to std output including new line
 */
int _printf(const char *format, ...)
{
	/*char buffer[1024];*/
	va_list args;
	int count = 0, i, j = 1, k, flag = 0;
	sp output[5] = {{'c', _char}, {'s', _string}, {'%', _module},
		{'i', _integer}, {'d', _integer}};

	if (!format)
		return (-1);
	va_start(args, format);
	(void)flag;
	for (i = 0; format[i] != '\0';)
	{
		if (format == NULL || (format[i] == '%' && !format[i + j])
		|| (format[i] == '%' && format[i + j] == ' ' && !format[i + j + 1]))
			return (-1);
		else if (format[i] == '%')
		{
			if (format[i + j] == '\0' || format[i + j] == ' ')
			{
				return (-1);
			}
			else
			{
				for (k = 0; k < 5; k++)
				{
					if (output[k].spesifier == format[i + j])
						flag = output[k].function(format, args, &count);
					count++;
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
