#include <unistd.h>

/*
int is_alpha(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')); 
}*/


void alpha_mirror(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = 'Z' - (str[i] - 'A');
		else if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = 'z' - (str[i] - 'a');
		write(1, &str[i], 1);
		i++;
	}

}




int	main(int argc, char **argv)
{
	if (argc == 2)
		alpha_mirror(argv[1]);
	write(1, "\n",1);
	return (0);
}
