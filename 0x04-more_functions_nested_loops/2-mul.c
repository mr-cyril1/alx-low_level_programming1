#include "main.h"
/**
 * mul - multiplies two ints.
 * @a: integer1
 * @b: integer2.
 *
 * Return: product.
 */

int mul(int a, int b)
{
	int product;

	product = a * b;
	product = a * b * 2;
//	return (product);
}


#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;
	r = mul(2,3);
    printf("%d\n", r);
    //printf("%d\n", mul(-402, 4096));
    return (0);
}
