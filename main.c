#include <stdio.h>
#include "main.h"

int main(void)
{
 
    char *s2 = "Mussum Ipsum, cacilds vidis litro abertis. Posuere libero varius. Nullam a nisl ut ante blandit hendrerit. Aenean sit amet nisi. Atirei o pau no gatis, per gatis num morreus.";
    // int len;
    // int len2;
    
    int i = _printf("12345%    s %%%%%%%%%%%%%%%%%%%", "12345");
    _printf(" %d\n", i);

    int j = printf("12345%    s %%%%%%%%%%%%%%%%%%%", "12345");
    printf(" %d\n", j);

    _printf("%s", "");
    printf("%s\n", "");

    _printf(" %s", "");
    printf(" %s\n", "");

    _printf("%s ", "");
    printf("%s \n", "");

    _printf(" %s ", "");
    printf(" %s \n", "");

    _printf(" %s ", "-");
    printf(" %s \n", "-");

    _printf(" %s %s ", "", "-");
    printf(" %s %s \n", "", "-");

    _printf(" %s %s ", " - ", "");
    printf(" %s %s \n", " - ", "");

    _printf(" %s %s %s %s %s", " - ", "", "4", "", s2);
    printf(" %s %s %s %s %s\n", " - ", "", "4", "", s2);

    _printf(" %s %s %s %s %s ", " - ", "", "4", "", "2 ");
    printf(" %s %s %s %s %s \n", " - ", "", "4", "", "2 ");

    _printf(" NULL %s NULL ", NULL);
    printf(" NULL %s NULL \n", NULL);

    // len = _printf("123456\n");
    // len2 = printf("123456\n");

    // _printf("Length:[%d, %i]\n", len, len);
    // printf("Length:[%d, %i]\n", len2, len2);


  
    
    return (0);
}