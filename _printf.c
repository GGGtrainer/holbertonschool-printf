#include "main.h"
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

int _putchar(int c)
{
	return write(1, %c, 1);
}

int _puts(char *str)
{
	int count;

	count = 0
		while (*str != '\0')
		{
			_putchar((int)*str);
			++count;
			++str
		}
	return count;
}

int print_format(char specifier, va_list argp)
{
	int count;

	count = 0;
	if (specifier == 'c')
		count += _putchar(va_arg(argp, int));
	else if (specifier == 's')
		count += _puts(va_arg(argp, char *));
	else if (specifier == 'd')
		count += print_digit(va_arg(argp, int), 10);
	else if (specifier == 'x')
		count += print_digit(va_arg(arg, unsigned int), 16);
	else
		count += write(1, &specifier, 1);
	return count;

}


/**
 * _print -
 *
 */

int _printf(const char *format, ...)
{
	va_list argp;
	int count;

	va_start(argp, format);
	count = 0;
	while(*format != '\0')
	{
		if (*format == '%')
			count += print_format(*(++format), argp);
		else 
			count += write (1, format, 1);
		++format;
	}
	va_end(argp);
	return count;
}




int main()
{
	int count;

	count = _printf("Hello there %s\n", "Anakin");
	_printf("The chars written are %d\n", count);
}
