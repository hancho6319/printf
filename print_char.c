#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
 * print_char - the function to print char
 * @args: list of the args
 * @buffer: buffer array of the char
 * @flags: the flags
 * @pre: precision specification
 * @size: size specifier
 * Return: Number of the char printed
 */

int print_char(va_list args, char buffer[], int flags,
		int width, int pre, int size)
{
	char c = va_arg(args, int);

	return (handle_write_char(c, buffer, flags, width, pre, size));
}
