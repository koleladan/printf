#include "main.h"
/**
 * print_str - prints a string
 *
 * @str: string
 *
 * Return: nothing
 */
void print_str(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\0');
}

