#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: Prints "_putchar" followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char text[] = "_putchar\n";
	int i;

	for (i = 0; text[i] != '\0'; i++)
	{
		write(1, &text[i], 1);
	}

	return (0);
}

