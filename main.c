#include <stdio.h>
#include "main.h"
#include <limits.h>
int main(void)
{
    /*int len;
    int len2, sum = 0;*/
    /* char *s2 = "Mussum Ipsum, cacilds vidis litro abertis. Posuere libero varius. Nullam a nisl ut ante blandit hendrerit. Aenean sit amet nisi. Atirei o pau no gatis, per gatis num morreus.";
    int len;
    int len2;
    
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

    _printf("2 %s ", "-");
    printf("2 %s \n", "-");

    printf("3 %s %s ", "", "-");
    _printf("3 %s %s \n", "", "-");

    _printf("4 %s %s ", " - ", "");
    printf("4 %s %s \n", " - ", "");

    _printf("5 %s %s %s %s %s", " - ", "", "4", "", s2);
    printf("5 %s %s %s %s %s\n", " - ", "", "4", "", s2);

    _printf("6 %s %s %s %s %s ", " - ", "", "4", "", "2 ");
    printf("6 %s %s %s %s %s \n", " - ", "", "4", "", "2 ");

    _printf(" NULL %s NULL ", NULL);
    printf(" NULL %s NULL \n", NULL); */

    /* len = _printf("123456\n");
    len2 = printf("123456\n");

    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2); */

    /* int len;
    int len2;
    int sum;

    char *str = "More Info Authorized functions and macros write (man 2 write) malloc (man 3 malloc) free (man 3 free) va_start (man 3 va_start) va_end (man 3 va_end) va_copy (man 3 va_copy) va_arg (man 3 va_arg) Compilation Your code will be compiled this way: $ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c As a consequence, be careful not to push any c file containing a main function in the root directory of your project.";
    
    /* unsigned int ui;
    void *addr; 

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");*/
    /* ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0; 
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    /* _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    /* _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr); 
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");

    printf("\n");
    printf("\n");

    len = 200, len2 = 155;

    sum = 31000;

    _printf("Sum:[%d, %i]\n", sum, sum);
    printf("Sum:[%d, %i]\n", sum, sum);

    printf("\n");
    printf("\n");

    len = printf("Printf: %s\n",str);
    len2 = _printf("Printf: %s\n",str);

    printf("\n");
    printf("\n");

    printf("Length:[%d, %i]", len, len);
    printf("\n");
    _printf("Length:[%d, %i]", len2, len2);

    printf("\n");
    printf("\n");*/

    /* printf(NULL); */

    /*len = _printf("long: [%i], [%d]\n", 21474836499, -21474836498);
    len2 = printf("long: [%i], [%d]\n", 21474836499, -21474836498);

    _printf("Len:[%d]\n", len);
    printf("Len1:[%d]\n\n", len2);

    len, len2, sum = 555555555;

    _printf("Sum:[%d, %i]\n", sum, sum);
    printf("Sum:[%d, %i]\n", sum, sum);

    len = _printf("A %s sentence\n", "simple");
    len2 = printf("A %s sentence\n", "simple");
    printf("Len:[%d]\n", len);
    printf("Len1:[%d]\n\n", len2);
    
    len = _printf("A %c%c%s sentence\n", 's', 'i', "mple");
    len2 = printf("A %c%c%s sentence\n", 's', 'i', "mple");
    printf("Len:[%d]\n", len);
    printf("Len1:[%d]\n\n", len2);

    len = _printf("A: A simple %v entence\n");
    len2 = printf("B: A simple %v entence\n");
    printf("Len:[%d]\n", len);
    printf("Len1:[%d]\n\n", len2);

    len = _printf("Percentage: %%\n");
    len2 = printf("Percentage: %%\n");
    printf("Len:[%d]\n", len);
    printf("Len1:[%d]\n\n", len2);*/

    int num1 = 123;
    int num2 = -456;
    int num3 = 0;
    int num4 = 0xFFFFFFFF;

    printf("%i\n", num1);
    _printf("%i\n", num1);

    printf("%i\n", num2);
    _printf("%i\n", num2);

    printf("%i\n", num3);         
    _printf("%i\n", num3);

    printf("%i\n", 0x10);
    _printf("%i\n", 0x10);

    printf("%i\n", 010);  
    _printf("%i\n", 010);    
    
    printf("%i\n", 'A'); 
    _printf("%i\n", 'A');
    
    printf("%i\n", num4);
    _printf("%i\n", num4);       
    
    return (0);
}