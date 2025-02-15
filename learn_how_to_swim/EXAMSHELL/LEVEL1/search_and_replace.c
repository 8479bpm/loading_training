#include <unistd.h>

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		index++;
	}
	return (index);
}

void ft_putstr(char *str)
{
	write (1, str, ft_strlen(str));
}

int	main(int argc, char *argv[])
{
	int	index;
	int	found;

	index = 0;
	found = 0;
	if (argc != 4 || argv[2][1] != '\0')
	{
		write(1, "\n", 1);
		return (0);
	}
	while (argv[1][index] != '\0')
	{
		if (argv[1][index] == argv[2][0])
		{
			argv[1][index] = argv[3][0];
		}
		write(1, &argv[1][index], 1);
		index++;
		found = 1;
	}

	if (!found)
	{
		ft_putstr(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}