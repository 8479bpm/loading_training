#include <unistd.h>

void	ft_countdown(void)
{
	char	index;

	index = '9';
	while (index >= '0')
	{
		write(1, &index, 1);
		index--;
	}
	write(1, "\n", 1);
}

int	main(void)
{
	ft_countdown();
	return (0);
}