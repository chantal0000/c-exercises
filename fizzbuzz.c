/*Assignment name  : fizzbuzz
Expected files   : fizzbuzz.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that prints the numbers from 1 to 100, each separated by a
newline.

If the number is a multiple of 3, it prints 'fizz' instead.

If the number is a multiple of 5, it prints 'buzz' instead.

If the number is both a multiple of 3 and a multiple of 5, it prints 'fizzbuzz' instead.
*/

#include <unistd.h>

void	put_number(int i)
{
	char c;
	if (i > 9)
	{
		put_number(i / 10);
		i = i % 10;
	}
	c = i + 48;
	write (1, &c, 1);
}


int	main()
{
	int i;

	i = 0;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			write(1, "fizzbuzz\n", 9);
		else if (i % 3 == 0)
			write(1, "fizz\n", 5);
		else if (i % 5 == 0)
			write(1, "buzz\n", 5);
		else
		{
			put_number(i);
			write(1, "\n", 1);
		}
		i++;
	}
	return (0);
}
