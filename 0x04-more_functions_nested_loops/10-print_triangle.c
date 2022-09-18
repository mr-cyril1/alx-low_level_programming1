#include "main.h"

/**
 * print_triangle - print triangle
 * @size: input size
 *
 * Description: size of triangle depends on input
 * Return: Always (0)
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');   /* just print newline if size <=0 */
	}
	else
	{
		for (i = 1; i <= size; i++)	/* no of loop run */
		{
			for (j = i; j < size; j++)	/* condition to print space */
			{
				_putchar(' ');
			}
			for (j = 1; j <= i; j++)	/* condition to print #*/
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
