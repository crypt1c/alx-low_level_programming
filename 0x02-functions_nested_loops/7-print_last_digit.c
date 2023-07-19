#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: The input number is an integer.
 *
 * Return: absolute value
 */
int _abs(int n)
{
	int l

	l = n % 10;
	if (l < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (l;
	}
}
