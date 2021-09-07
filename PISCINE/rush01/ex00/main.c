#include <unistd.h>
#include <stdlib.h>
void	ft_logic_col3 (int **matrix);
void	ft_logic_row3 (int **matrix);
void	ft_logic_row45 (int **matrix);
void	ft_logic_row40 (int **matrix);
void	ft_logic_col45 (int **matrix);
void	ft_logic_col40 (int **matrix);
void	ft_empty (int **matrix);
void	ft_initialize_col (int **ptr, int *nums, int i);
void	ft_inicialize(int **ptr, int *nums);
void	ft_print (int **matrix);
int		ft_number_error_even (char **params);
int		ft_number_error_odd (char **params);

int	**get (void)
{
	int	**tab;
	int	*fila;
	int	i;

	tab = malloc (sizeof(int *) * 6);
	i =0;
	while (i < 6)
	{
		fila = malloc (4 * 6);
		tab[i] = fila;
		i++;
	}
	return (tab);
}

int	**ft_allocate (void)
{
	int	**ptr;

	ptr = get();
	return (ptr);
}

void	ft_logic (int **ptr)
{
	ft_logic_row40 (ptr);
	ft_logic_col40 (ptr);
	ft_logic_row45 (ptr);
	ft_logic_col45 (ptr);
	ft_logic_row3 (ptr);
	ft_logic_col3 (ptr);
	ft_print(ptr);
}

void	ft_numbers (char **params)
{
	int	i;
	int	index;
	int	nums[16];	
	int	**ptr;

	i = 0;
	index = 0;
	while (params[1][index] != '\0')
	{
		if (index % 2 == 0)
		{
			nums[i] = params[1][index] - '0';
			i++;
		}
		index++;
	}
	ptr = ft_allocate ();
	ft_empty(ptr);
	ft_inicialize (ptr, nums);
	ft_logic (ptr);
	free (ptr);
}

int	main (int numargs, char **params)
{
	int	eodd;
	int	eeven;

	eodd = 0;
	eeven = 0;
	eodd = ft_number_error_odd (params);
	eeven = ft_number_error_even (params);
	if (numargs != 2)
		write (1, "Error\n", 7);
	else if (params[1][31] != '\0')
		write (1, "Error\n", 7);
	else if (eeven == 1)
		write (1, "Error\n", 7);
	else if (eodd == 1)
		write (1, "Error\n", 7);
	else
		ft_numbers(params);
	return (0);
}
