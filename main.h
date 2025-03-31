#ifndef MAIN_H
#define MAIN_H

/*Libraries*/
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/*Prototypes*/
int _printf(const char *format, ...);
int _putchar(int c);
int print_int(int base);
int handle_format(const char *format, va_list args, int *i);

#endif
