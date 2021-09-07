#include "bsq.h"

void	print_map_error(void)
{
	write(1, &"Map error", 9);
}

char	*ft_take_blank(void)
{
	char	buffer[1];
	char	*tmp;
	int		fd;

	tmp = malloc (sizeof (char) * 5);
	tmp[0] = 't';
	tmp[1] = 'm';
	tmp[2] = 'p';
	fd = open("tmp", O_WRONLY | O_CREAT | O_TRUNC, 0755);
	while (read(0, buffer, sizeof(buffer)) != 0)
		write(fd, buffer, sizeof(buffer));
	close (fd);
	write(1, &"\n", 1);
	return (tmp);
}

int	ft_atoi(char *str)
{
	int	i;
	int	mult;
	int	nb;

	mult = 1;
	nb = 0;
	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = (nb * 10) + (str[i] - '0');
		i++;
	}
	return (nb);
}

void	ft_print_map (char **map, int col, int row)
{
	int	i;
	int	j;

	i = 0;
	while (i < row)
	{
		j = 0;
		while (j < col)
		{
			write (1, &map[i][j], 1);
			j++;
		}
		if (j == col)
			write (1, "\n", 1);
		i++;
	}
}
