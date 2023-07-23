#include "main.h"

/**
 * _integer - function
 * @num: num
 * @pcount: pointer
 */

void _integer(char *format, va_list arg, int *pcount)
{
    (void)format;
    int Tens = 1;
    int cpy;
    int num = va_arg(arg, int);
   
   if (num < 0)
   {
     _putchar('-');
     *pcount += 1;
     num *= -1;
   }
   
   cpy = num;
   
   while (cpy > 9)
   {
       Tens *= 10;
       cpy = cpy / 10;
   }
   
   while (num > 9)
   {
       _putchar(num / Tens + '0');
       *pcount += 1;
       num = num % Tens;
       Tens /= 10;
   }
   _putchar((num % 10) + '0');
   *pcount += 1;

}