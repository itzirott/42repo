void	ft_logic_row45 (int **matrix)
{
	int	row;
	int	rrow;
	int	col;
	int	num;

	row = 5;
	col = 1;
	while (col < 5)
	{
		if (matrix[row][col] == 4)
		{	
			rrow = 4;
			num = 1;
			while (rrow > 0)
			{
				matrix[rrow][col] = num;
				rrow--;
				num++;
			}
		}
		col++;
	}
}

void	ft_logic_row40 (int **matrix)
{
	int	row;
	int	rrow;
	int	col;
	int	num;

	row = 0;
	col = 1;
	while (col < 5)
	{
		if (matrix[row][col] == 4)
		{	
			rrow = 1;
			num = 1;
			while (rrow < 5)
			{
				matrix[rrow][col] = num;
				rrow++;
				num++;
			}
		}
		col++;
	}
}

void	ft_logic_col45 (int **matrix)
{
	int	row;
	int	ccol;
	int	col;
	int	num;

	col = 5;
	row = 1;
	while (row < 5 )
	{
		if (matrix[row][col] == 4)
		{
			ccol = 4;
			num = 1;
			while (ccol > 0)
			{
				matrix[row][ccol] = num;
				ccol--;
				num++;
			}
		}
		row++;
	}
}

void	ft_logic_col40 (int **matrix)
{
	int	row;
	int	ccol;
	int	col;
	int	num;

	col = 0;
	row = 1;
	while (row < 5 )
	{
		if (matrix[row][col] == 4)
		{
			ccol = 1;
			num = 1;
			while (ccol < 5)
			{
				matrix[row][ccol] = num;
				ccol++;
				num++;
			}
		}
		row++;
	}
}
