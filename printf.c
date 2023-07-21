#include "main.h"
#include <stdarg.h>

/**
 * _printf - cutom version of printff 
 * 
 * @format: input string which may contain specifiers  
 * @Return: number of character printed to std output including new line 
 */

int _printf(const char *format, ...)
{
    /*char buffer[1024];*/
    va_list args;
    int count = 0;
    int i, j = 1;
    va_start(args, format);
    
    for (i = 0; format[i];)
    {
        if (format[i] == '%')
        {
            if(format[i + j] == ' ')
                j++;
            else if(format[i + j] == 'c')
            {
                char c = va_arg(args, int);
                _char(c, &count);
                i += j + 1;
                j = 1;
            }
            else if (format[i + j] == 's')
            {
                char *str = va_arg(args, char *);
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
                int num = va_arg(args, int);
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
