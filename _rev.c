#include "main.h"

int _rev(const char *format, va_list arg, int *pcount)
{
    int i, j, count;
    char rev[1000];
    char *s = va_arg(arg, char *);

    /*str = malloc(sizeof(char) * *s);*/
    (void)format;

    while (s[count] != '\0')
        count++;

    j = count - 1;

    for (i = 0; i < count; i++)
	{
		_putchar(rev[i] = s[j]);
        j--;
		*pcount += 1;
	}

    return (*pcount);
}