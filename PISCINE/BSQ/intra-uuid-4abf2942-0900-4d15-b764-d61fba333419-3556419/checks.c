#include "bsq.h"

int	ft_check_params(int fich, char *buffer, int u, int i)
{
	while (read (fich, buffer, 1) != 0)
	{
		if (buffer[0] == '\n')
		{
			if (u != i)
			{
				close(fich);
				return (0);
			}
			u = -1;
		}
		u++;
	}
	close(fich);
	return (1);
}

int	ft_check_table(char *file, char *buffer, int nb)
{
	int	i;
	int	fich;
	int	u;

	i = 0;
	u = 0;
	fich = open(file, O_RDONLY);
	if (fich == -1)
		return (0);
	else if (nb > 1)
		read(fich, buffer, 1);
	while (buffer[0] != '\n')
	{
		read(fich, buffer, 1);
	}
	read(fich, buffer, 1);
	while (buffer[0] != '\n')
	{
		read(fich, buffer, 1);
		i++;
	}
	if (ft_check_params(fich, buffer, u, i))
		return (1);
	return (0);
}

char	*ft_header_nums (char *array, int size)
{
	char	*strparams;
	int		i;

	strparams = malloc (sizeof (char)* (size - 3));
	i = size - 4;
	while (i >= 0)
	{
		strparams[i] = array[i];
		i--;
	}
	return (strparams);
}

char	*ft_header_chars (char *array, int size)
{
	char	*strparams;
	int		i;

	strparams = malloc (sizeof (char)* 3);
	i = 3;
	while (i > 0)
	{
		strparams[i -1] = array[size -1];
		size--;
		i--;
	}
	return (strparams);
}

char	*ft_get_header_params(char *array, int choice)
{
	int		i;
	int		size;
	char	*strparams;

	i = 0;
	size = 0;
	while (array[size] != '\0')
		size++;
	if (choice == 0)
		strparams = ft_header_nums(array, size);
	if (choice == 1)
		strparams = ft_header_chars(array, size);
	return (strparams);
}
