/*
 * print_fizz - prints the word fizz
 */
void print_fizz(void)
{
	_putchar('F');
	_putchar('i');
	_putchar('z');
	_putchar('z');
}


/*
 * print_buzz - prints the word buzz
 */
void print_buzz(void)
{
	_putchar('B');
	_putchar('u');
	_putchar('z');
	_putchar('z');
}

/**
 * main - main method
 *
 * Return: returns 0
 */
int main(void)
{
	int i, one, tens;

	for (i = 1; i <= 100; i++)
	{

		if (i % 3 == 0 && i % 5 == 0)
		{
			_putchar(' ');
			print_fizz();
			_putchar(' ');
			print_buzz();
		}
		else if (i % 5 == 0)
		{
			_putchar(' ');
			print_buzz();
		}else if ( i % 3 == 0)
		{
			_putchar(' ');
			print_fizz();
		}
		else
		{
			if (i > 9)
			{
				tens = i / 10;
				one = i % 10;

				_putchar
			}
		}
	}
}


