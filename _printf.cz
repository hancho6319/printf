#include <stdarg.h>
#include <unistd.h>
#include "main.h"
/**
 * _printf - function that produces output according to a format
 * @format: the formatted string to print (the pointer)
 * @...: the arguments of the string
 * Return: int for number of charecters printed
 */
int _printf(const char *format, ...)
{
	int (*f)(va_list);
	int i = 0, count = 0, value = 0;

	va_list args;

	va_start(args, format);
	if (format == NULL)
		return (-1);
	/* To print each of the string charecter */
	while (format[i])
	{
		if (format[i] != '%')
		{
			value = write(1, &format[i], 1);
			count += value;
			i++;
			continue;
		}
		if (format[i] == '%')
		{
			f = check_specifier(&format[i + 1]);
			if (f != NULL)
			{
				value = f(args);
				count = count + value;
				i = i + 2;
				continue;
			}
			if (format[i + 1] == '\0')
				break;
			if (format[i + 1] != '\0')
			{
				value = write(1, &format[i], 1);
				count += value;
				i = i + 2;
				continue;
			}
		}
	}
	return (count);
}
