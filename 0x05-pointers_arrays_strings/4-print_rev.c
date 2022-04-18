/*
 * File: 4-print_rev.c
 * Author Abdrohman Ebrahim Hanur
 */

#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed.
 */
void print_rev(char *s)
{
	int length;

for (length = 0; *s != '\0'; s++)
length++;

s--;
length--;

for (; length >= 0; length--, s--)
	_putchar(*s);

	_putchar('\n');
}
