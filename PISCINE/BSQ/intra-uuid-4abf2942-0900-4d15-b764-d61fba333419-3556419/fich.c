#include "bsq.h"

char	*ft_fich_header(int fich, char *buffer)
{
	int		i;
	int		u;
	char	*params;
	char	maxargsvalue[10];

	i = -1;
	u = 0;
	while (buffer[0] != '\n')
	{
		maxargsvalue[i] = buffer[0];
		read(fich, buffer, 1);
		i++;
	}
	if (i > 0)
		params = malloc(sizeof(char) * i);
	while (u < i)
	{
		params[u] = maxargsvalue[u];
		u++;
	}
	return (params);
}

int	ft_col_quantity(int fich, char *buffer)
{
	int	i;

	i = 0;
	read (fich, buffer, 1);
	while (buffer[0] != '\n')
	{
		read(fich, buffer, 1);
	}
	read (fich, buffer, 1);
	while (buffer[0] != '\n')
	{
		read (fich, buffer, 1);
		i++;
	}
	close (fich);
	return (i);
}

void	ft_free_memory (int **tab, char **map, char *h_nums, char *h_chars)
{
	free (tab);
	free (map);
	free (h_nums);
	free (h_chars);
}

int	ft_fich_control(char *file)
{
	int		fich;
	int		row;
	int		col;
	char	buffer[1];
	t_data	*data;

	data = malloc(sizeof(t_data));
	fich = open(file, O_RDONLY);
	data->fich_header = ft_fich_header(fich, buffer);
	close(fich);
	data->h_nums = ft_get_header_params(data->fich_header, 0);
	data->h_chars = ft_get_header_params(data->fich_header, 1);
	fich = open(file, O_RDONLY);
	col = ft_col_quantity(fich, buffer);
	row = ft_atoi(data->h_nums);
	fich = open(file, O_RDONLY);
	data->tab = ft_initdimension(row, col, fich, buffer);
	close(fich);
	ft_logic(data->tab, col, row);
	data->mark = ft_find_greatest (data->tab, col, row);
	data->map = ft_revert_map(data->tab, col, row, data->h_chars);
	ft_put_square (data->map, data->h_chars, data->mark);
	ft_print_map (data->map, col, row);
	return (1);
}
