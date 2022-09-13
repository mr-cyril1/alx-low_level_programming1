#include <stdio.h>

/**
 * main - it print the first 98 fibonacci numbers
 * Return: 0
 */
int main(void)
{
	long int i, n1, n2, next;

	n1 = 0;
	n2 = 1;
	next = n1 + n2;
	for (i = 0; i <= 98; i++)
	{
		printf("%li", next);
		n1 = n2;
		n2 = next;
		next = n1 + n2;
		if (i == 98)
			break;
		printf(", ");
	}
	printf("\n");
	return (0);
}

