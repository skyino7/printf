#include <stdio.h>
#include "main.h"

int main(void)
{
 
    
    int len;
    int len2;
  

    len = _printf("123456\n");
    len2 = printf("123456\n");

    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);


  
    
    return (0);
}