#include <stdio.h>

/**
 * main - prints all numbers between 0 and 99
 * with no two digits being the same
 * Return: 0
 */
int main(void)
{
int i, j;
for (i = 48; i < 58; i++)
{
for (j = i; j < 58; j++)
{
if (i == j)
{
continue;
}
putchar(i);
putchar(j);
if (i == 56 && j == 57)
{
break;
}
else
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
