#include "main.h"

/**
 * @brief 
 * 
 */

void _integer(int num, int *pcount)
{
    int Tens = 1;
   int cpy;
   
   if (num < 0)
   {
     putchar('-');
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
       putchar(num / Tens + '0');
       *pcount += 1;
       num = num % Tens;
       Tens /= 10;
   }
   putchar((num % 10) + '0');
   *pcount += 1;

}