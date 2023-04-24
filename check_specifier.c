#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
 * check_specifier - the function used check the specifier is
 * a valid with the function of it to call for the printing
 * @format: the specifier to pass as char pointer
 *
 * Return: pointer to a function
 *
 * Deascriptions: the check_specifier function return
 * pointer to a function is successful otherwise
 * return NULL
 */

int (*check_specifier(char *format))(va_list)
{
	int i;

	func_t array[4] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_cent},
		{NULL, NULL}};
	for (i = 0; array[i].sp != NULL; i++)
	{
		if (*(array[i].sp) == *format)
		{
			return (array[i].f);
		}

	}
	return (NULL);
}
