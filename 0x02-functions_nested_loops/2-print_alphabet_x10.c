/**
 * print_alphabet_x10 - prints lowercase letters ten times
 */
void print_alphabet_x10(void)
{
	int j;
	int k;

	for (int x = 0; x < 10; x++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
