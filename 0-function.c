#include "main.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * c_func - function that prints characters
 * @args: character passed into function
 * Return: counter
 */
int c_func(va_list args)
{
	char c;

	c = va_arg(args, int);
	_putchar(c);
	return (1);
}
/*
 * s_func - function to print strings
 * @args: strings passed to function
 * Return: counter
 */
int s_func(va_list args)
{
	int i;
	char *s;

	s = va_arg(args, char *);

	if (s == NULL)
	{
		s = "(null)";
	}
	i = 0;

	while s[i]
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
}
/**
 * perc_function - function that prints %
 * @args: character passed to function
 * Return: number of characters
 */
int perc_function(va_list args)
{
	(void)args;
	_putchar('%');
	return(1);
}
