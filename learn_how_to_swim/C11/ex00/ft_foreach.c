void	ft_foreach(int *tab, int length, (*f)(int))
{
	int	index;

	index = 0;
	while (index < length)
	{
		f(tab[index]);
		index++;
	}
}
