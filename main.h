#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int _putchar(char c);
void _string(char *s, int *pcount);
void _char(char c, int *pcount);
int _printf(const char *format, ...);
/* void _integer(int num, int *pcount); */
int _integer(int num);

#endif /*MAIN_H*/
