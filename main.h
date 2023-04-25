#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int (*check_specifier(const char *format))(va_list);

int print_char(va_list);
int print_cent(va_list);
int print_str(va_list);

/*
 * struct fun - the struct fun for the specifiers
 * @sp: the char pointer for the comparing
 * 
 * Descriptions: This is struct used to
 * compare and handle the specifiers
 */

typedef struct fun
{
	char *sp;

	/**
	 * @f: the function handling the printing the specifier
	 *
	 * Descriptions: This is struct used to
	 * compare and handle the specifiers
	 */
	int (*f)(va_list);
}func_t;

#endif
