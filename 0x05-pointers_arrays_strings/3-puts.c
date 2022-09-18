#include "main.h"

/**
 * *_puts - To print strings to stdout.
 * @str:string to be printed.
 */

void _puts(char *str)
{
while (*str)
_putchar(*str++);
_putchar(10);
}
