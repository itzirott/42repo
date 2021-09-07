#include "bsq.h"

void	ft_logic(int **map, int x, int y)
{
	int	col;
	int	row;
	int	temp;

	row = 1;
	while (row < y)
	{
		col = 1;
		while (col < x)
		{
			if (map[row][col] == 0)
				temp = 0;
			else if (map[row -1][col - 1] < map[row - 1][col]
				&& map[row - 1][col -1] < map[row][col -1])
				temp = map[row - 1][col - 1];
			else if (map[row - 1][col] < map[row][col - 1])
				temp = map[row - 1][col];
			else
				temp = map[row][col - 1];
			if (map[row][col] != 0)
				map[row][col] = temp + 1;
			col++;
		}
		row++;
	}
}

int	*ft_find_greatest(int **map, int x, int y)
{
	int	row;
	int	col;
	int	*g;

	g = malloc (sizeof(int) * 3);
	row = 0;
	g[0] = 0;
	g[1] = y;
	g[2] = x;
	while (row < y)
	{
		col = 0;
		while (col < x)
		{
			if (map[row][col] > g[0])
			{
				g[0] = map[row][col];
				g[1] = row;
				g[2] = col;
			}
			col++;
		}
		row++;
	}
	return (g);
}

char	**ft_reinit_map(int col, int row)
{
	int		i;
	char	**tab;

	tab = malloc (sizeof(char *) * row);
	i = 0;
	while (i != row)
	{
		tab[i] = malloc (sizeof(char) * col);
		i++;
	}
	return (tab);
}

char	**ft_revert_map(int **tab, int col, int row, char *header)
{
	char	**map;
	int		i;
	int		j;

	map = ft_reinit_map(col, row);
	i = 0;
	while (i < row)
	{
		j = 0;
		while (j < col)
		{
			if (tab[i][j] == 0)
				map[i][j] = header[1];
			else
				map[i][j] = header[0];
			j++;
		}
		i++;
	}
	return (map);
}

void	ft_put_square(char **map, char *header, int *mark)
{
	int	i;
	int	j;

	i = mark[1];
	while (i >= mark[1] + 1 - mark[0])
	{
		j = mark[2];
		while (j >= mark[2] + 1 - mark[0])
		{
			map[i][j] = header[2];
			j--;
		}
		i--;
	}
}
