#include <unistd.h>

void	put_num(int i)
{
	i = i + 48;
	write (1, &i, 1);
}

void	fizzbuzz()
{
	int	i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			write(1, "fizzbuzz", 8);
		else if (i % 3 == 0)
			write(1, "fizz", 4);
		else if (i % 5 == 0)
			write(1, "buzz", 4);
		else if (i <= 9)
			put_num(i);
		else
		{
			put_num(i / 10);
			put_num(i % 10);
		}			
		write(1, "\n", 1);
		i++;
	}
}

int main()
{
	fizzbuzz();
	return (0);
}
