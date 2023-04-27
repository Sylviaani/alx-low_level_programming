#include <stdio.h>

/**
* main - do not cause an infinite loop
* Return: 0
*/

int main(void)
{
	int i;

	printf("do not cause an infinite loop :(\n");

	i = 0;

	while (i < 10)
	{
		putchar(i);
	}

	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
