#include "main.h"

/**
 * _printf - simplified version of printf
 * @format: format string
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, count = 0;

	if (!format)
		return (-1);

	va_start(args, format);

	while (format[i])
	{
		if (format[i] == '%' && !format[i + 1])
		{
<<<<<<< HEAD
			va_end(args);
			return (-1);
		}
		else if (format[i] == '%' && format[i + 1])
		{
			count += handle_format(format, args, &i);
=======
			i++;
			if (format[i] == 'd' || format[i] == 'i')
			{
				count += print_int(va_arg(args, int));
			}
			else if (format[i] == 'c')
			{
				count += _putchar(va_arg(args, int));
			}
			else if (format[i] == 's')
			{
				int j = 0;
				char *str = va_arg(args, char *);

				if (!str)
				{
					str = "(null)";
				}
				while (str[j])
					count += _putchar(str[j++]);
			}
			else if (format[i] == '%')
			{
				count += _putchar('%');
			}
			else
			{
				count += _putchar('%');
				count += _putchar(format[i]);
			}
>>>>>>> 578f3cd7058b6a821e15482cfe5124acf827d6f7
		}
		else
		{
			count += _putchar(format[i]);
		}
		i++;
	}

	va_end(args);
	return (count);
}

