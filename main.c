#include <stdio.h>
#include "main.h"

int main(void)
{
 
    //char *s;
    // int len;
    // int len2;
    
    int i = _printf("%%", "12345");
    _printf(" %d\n", i);

    int j = printf("%%", "12345");
    printf(" %d\n", j);

    // len = _printf("123456\n");
    // len2 = printf("123456\n");

    // _printf("Length:[%d, %i]\n", len, len);
    // printf("Length:[%d, %i]\n", len2, len2);


  
    
    return (0);
}