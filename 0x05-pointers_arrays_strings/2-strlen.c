#include "main.h"

/**
 * _strlen -Return the length of a string.
 * @s:The string.
 * Return: The lenth of a string.
 */

int _strlen(char *s)

{
int len = 0;
while (*s++)
len++;
return (len);
}
