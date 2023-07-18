#include <unistd.h>

/**
 * main - Entry point
 * Description: prints '_putchar\n'
 * Return: Always 0(Success)
 */

int main(void)
{
	char str[] = "_putchar";
	int i = 0;

	while (str[i] != '\0')
	{
		char c = str[i];

		_putchar(c);
		i++;
	}
	return (0);
}
