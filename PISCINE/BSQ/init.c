#include "bsq.h"

int	**ft_initdimension(int row, int columns, int fich, char *buffer)
{
	int	**tab;
	int	i;
	int	u;

	u = 0;
	i = 0;
	tab = ft_initarray(row, columns);
	read(fich, buffer, 1);
	while (buffer[0] != '\n')
		read(fich, buffer, 1);
	i = 0;
	while (i < row)
	{
		u = 0;
		read(fich, buffer, 1);
		while (u < columns && buffer[0] != '\n')
		{
			if (buffer[0] != 'o')
				tab[i][u] = 1;
			u++;
			read(fich, buffer, 1);
		}
		i++;
	}
	return (tab);
}

int	**ft_initarray(int row, int columns)
{
	int	**tab;
	int	i;

	i = 0;
	tab = malloc (sizeof (int *) * row);
	while (i != row)
	{
		tab[i] = malloc (sizeof (int) * columns);
		i++;
	}
	return (tab);
}
