#include <stdio.h>

/**
 * main - this is the main function
 *
 * Return: alway 0 when success
 */
int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		putchar(i + '0');
		if (i != '0')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
