#include <stdio.h>

int main(void)
{
    /* printf("");
    _printf(""); */
    
    int len;
    int len2;
    int sum;

    long int n = 52589745687458;
    long int d = 9739355992;
    int num = 0;

    int a, b;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");

    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);


    _printf("%%\n");
    printf("%%\n");

    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");

    a = -1; b = 0; sum = a + b;

    _printf("%i\n", sum);
    printf("%i\n", sum);

    /* _printf(NULL);
    printf(NULL);

    _printf("");
    printf(""); */

    sum = len + len2;

    num = d + n;

    _printf("Adding: %d\n", num);
    printf("Adding: %d\n", num);

    _printf("Sum is %d\n", sum);
    printf("Sum is %d\n", sum);

    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');

    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");

    len = _printf("long: [%i], [%d]\n", -4545439394949595, -4545439394949595);
    /* len2 = printf("long: [%i], [%d]\n", -4545439394949595, -4545439394949595); */

    len = _printf("N-Greater than int: [%i], [%d]\n", -454543939494, -454543939494);
    /* len2 = printf("N-Greater than int: [%i], [%d]\n", -454543939494, -454543939494); */
    printf("Len:[%d]\n", len);
    /* printf("Len1:[%d]\n\n", len2); */

    _printf("Length:[%d, %i]\n", len, len);
    /* printf("Length:[%d, %i]\n", len2, len2); */

    len = _printf("Negative: [%i], [%d]\n", -4034, -4034);
    len2 = printf("Negative: [%i], [%d]\n", -4034, -4034);

    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    
    return (0);
}