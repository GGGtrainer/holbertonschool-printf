#include "main.h"

int _putchar(int c)
{
	return write(1, &c, 1);
}

int _puts(char *str)
{
	int count;

	count = 0;
		while (*str != '\0')
		{
			_putchar((int)*str);
			++count;
			++str;
		}
	return count;
}

int print_digit(long n, int base)
{
	int count;
	char *symbols;

	symbols = "0123456789abcdef";

	if (n < 0)
	{
		write(1, "-", 1);
		return print_digit(-n, base) + 1;
	}
	else if (n < base)
		return _putchar(symbols[n]);
	else
	{
		count = print_digit(n / base, base);
		return count + print_digit(n % base, base);
	}

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
		count += print_digit((long)va_arg(argp, int), 10);
	else if (specifier == 'x')
		count += print_digit((long)va_arg(argp, unsigned int), 16);
	else
		count += write(1, &specifier, 1);
	return count;

}


/**
 * _printf - prints strings, chars, ints and unsigned ints
 * return: count
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

	_printf("Hi %s, your bank statement is $%d, in hex %x, a char %c for your troubles\n", "Suge", 420, 420, 'w');
/*	count = _printf("Hello there %s\n", "Anakin");
	printf("Hello there %s\n", "Anakin");
	count = _printf("%x\n", 0);
	count = printf("%x\n", 0);
	_printf("The chars written are %d\n", count);
	printf("The chars written are %d\n", count);
*/
}
