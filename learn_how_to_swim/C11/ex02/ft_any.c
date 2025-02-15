int ft_any(char **tab, int(*f)(char*))
{
	int	index;

	index = 0;
	if (!tab || !f)
	{
		return NULL;
	}
	while (tab[index] != '\0')
	{
		if (f(tab[index]) != '\0')
		{
			return 1;
		}
		index++;
	}
	return (0);
}