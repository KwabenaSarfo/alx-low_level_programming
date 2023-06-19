#include <stdio.h>

/**
 * main -This code prints alphabet without q and e.
 *
 * Return: 0
 */
int main(void)
{
	char t;

	for (t = 'a'; t <= 'z'; t++)
	{
		if (t != 'q' && t != 'e')
		{
			putchar(t);
		}
	}

	putchar('\n');

	return (0);
}
