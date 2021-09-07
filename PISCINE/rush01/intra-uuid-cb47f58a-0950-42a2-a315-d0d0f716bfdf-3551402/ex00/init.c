void	ft_empty (int **matrix)
{
	int	row;
	int	col;

	row = 0;
	while (row < 6)
	{
		col = 0;
		while (col < 6)
		{
			matrix[row][col] = 0;
			col++;
		}
		row++;
	}
}

void	ft_initialize_col (int **ptr, int *nums, int i)
{
	int	row;
	int	col;

	row = 6;
	col = 0;
	while (i >= 8 && i < 16 && col < 6)
	{
		if (col == 0 || col == 5)
		{
			row = 1;
			while (row < 5)
			{
				ptr[row][col] = nums[i];
				row++;
				i++;
			}
		}
		col++;
	}
}

void	ft_inicialize(int **ptr, int *nums)
{
	int	row;
	int	col;
	int	i;

	i = 0;
	row = 0;
	while (i < 8 && row < 6)
	{
		if (row == 0 || row == 5)
		{
			col = 1;
			while (col < 5)
			{
				ptr[row][col] = nums[i];
				col++;
				i++;
			}
		}
		row++;
	}
	ft_initialize_col(ptr, nums, i);
}
