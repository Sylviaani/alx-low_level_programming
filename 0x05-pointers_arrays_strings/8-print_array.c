#include "main.h"
#include <stdio.h>

/**
* print_array - a function that prints n numbers of an array
* @a: Array name
* @n: Number of items to be printed
* Return: void
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i == n - 1)
			continue;


		printf(", ");
	}
	printf("\n");
}
