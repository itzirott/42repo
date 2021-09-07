int	ft_number_error_even (char **params)
{
	int	i;
	int	index;
	int	e;

	e = 0;
	i = 0;
	index = 0;
	while (params[1][index] != '\0')
	{
		if (index % 2 != 0)
		{
			if (params[1][index] != ' ')
				e = 1;
			i++;
		}
		index++;
	}
	return (e);
}

int	ft_number_error_odd (char **params)
{
	int	i;
	int	index;
	int	e;

	e = 0;
	i = 0;
	index = 0;
	while (params[1][index] != '\0')
	{
		if (index % 2 == 0)
		{
			if (params[1][index] > '4')
				e = 1;
			if (params[1][index] < '1')
				e = 1;
			i++;
		}
		index++;
	}
	return (e);
}
