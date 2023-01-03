#include <stdio.h>

/**
 * more_numbers - function that prints 10 times the number, from 0 to 14
 * _putchar only 3 times
 *
 * Return: 0-14 10 times
 */
void more_numbers(void)
{
int number1, number2;

for (number1 = 0; number1 < 10; number1++)
{
for (number2 = 0; number2 <= 14; number2++)
{
if (number2 < 9)
{
putchar((number2 / 10) + '0');
putchar((number2 % 10) + '0');
{
putchar(10);
}
}
}
}
}
