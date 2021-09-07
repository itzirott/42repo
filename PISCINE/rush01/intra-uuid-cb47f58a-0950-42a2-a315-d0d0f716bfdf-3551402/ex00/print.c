#include <unistd.h>

void	ft_print (int **matrix)
{
	int		row;
	int		col;
	char	c;

	row = 1;
	while (row < 5)
	{
		col = 1;
		while (col < 5)
		{
			c = matrix[row][col] + '0';
			write(1, &c, 1);
			if (col != 4)
				write(1, " ", 1);
			col++;
		}
		write(1, "\n", 1);
		row++;
	}
}
