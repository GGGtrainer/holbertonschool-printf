#include "main.h"

/**
 * handle_format - handles format specifiers for _printf
 * @format: the format string
 * @args: va_list of arguments
 * @i: pointer to current index in format string*
 * Return: number of characters printed
 */
int handle_format(const char format, va_list args, inti)
{
    int count = 0;

    (i)++;

    if (format[i] == 'd' || format[i] == 'i')
        count += print_int(va_arg(args, int));
    else if (format[i] == 'c')
        count += _putchar(va_arg(args, int));
    else if (format[i] == 's')
    {
        charstr = va_arg(args, char );
        int j = 0;

        if (!str)
            str = "(null)";
        while (str[j])
        {
            count += _putchar(str[j]);
            j++;
        }
    }
    else if (format[i] == '%')
        count += _putchar('%');
    else
    {
        count += _putchar('%');
        count += _putchar(format[*i]);
    }

    return (count);
}
