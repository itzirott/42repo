void	ft_logic_col3 (int **matrix)
{
	int	row;
	int	col;

	row = 1;
	col = 0;
	while (row < 5)
	{
		if (matrix[row][col] == 1 && matrix[row][col + 5] == 2)
		{
			if (matrix[row][col + 1] == 4)
				matrix[row][col + 4] = 3;
		}
		else if (matrix[row][col] == 2 && matrix[row][col + 5] == 1)
		{
			if (matrix[row][col + 4] == 4)
				matrix[row][col + 1] = 3;
		}
		row++;
	}
}

void	ft_logic_row3 (int **matrix)
{
	int	row;
	int	col;

	row = 0;
	col = 1;
	while (col < 5)
	{
		if (matrix[row][col] == 1 && matrix[row + 5][col] == 2)
		{
			if (matrix[row + 1][col] == 4)
				matrix[row + 4][col] = 3;
		}
		else if (matrix[row][col] == 2 && matrix[row + 5][col] == 1)
		{
			if (matrix[row + 4][col] == 4)
				matrix[row + 1][col] = 3;
		}
		col++;
	}
}
