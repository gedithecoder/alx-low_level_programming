#include <stdio.h>

int main(void)
{
	int a, b, c;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			c = a * b;
			if (b == 0 && c == 0)
			{
				printf("%d", c);
			}
			else if (b >= 1 && c < 10)
			{
				printf(",  %d", c);
			}
			else if (b >= 1 && c >= 10)
			{
				printf(", %d", c);
			}
		}
		printf("\n");
	}
	return (0);
}
			
