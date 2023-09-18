
#include <string.h>
#include <stdio.h>

char	ft_strcpy(char *dest, const char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (*dest);
}


int main()
{
	char	str1[20];
	char	*str2;
	char	stra[20];
	char	*strb;

	str2 = "Hello, World";
	strcpy(str1, str2);
	printf("og: %s\n", str1);

	strb = "Hello, World";
	ft_strcpy(stra, strb);
	printf("my: %s\n", strb);
}
