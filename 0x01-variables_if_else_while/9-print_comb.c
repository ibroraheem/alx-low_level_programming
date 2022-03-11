#include <stdio.h>

/**
 * main - Prints number 0 to 9 with comma.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char num[20] = "0,1,2,3,4,5,6,7,8,9";
	int i;

	for (i = 0; i < 20; i++)
	{
		putchar(num[i]);
	}
	putchar('\n');
	return (0);
}
