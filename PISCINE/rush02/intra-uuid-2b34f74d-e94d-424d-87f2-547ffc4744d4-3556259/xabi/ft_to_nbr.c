#include <stdio.h>
#include <unistd.h>

//int	ft_check(char *argv);
int		ft_strlen(char *str);
void	ft_write(int *nbr);

void	ft_to_nbr(int ar, char **argv, int *str)
{
	int	i;
	int	j;
//	int ar;
//	unsigned int b; 
	
	i = 0;
	ar = 1;
//	b = nbr;
	while (argv[ar][i] != '\0')
	{
		if ((argv[ar][i] > 47) && (argv[ar][i] < 58))
		{	
			argv[ar][i] = argv[ar][i] - '0';
			i++;
		}	
		else
		{	
			printf("Ha introducido un caracter");
			i = ft_strlen(argv[ar]);
		}

	}
	j = 0;
	while (i >= 0)
	{
		str[j] = argv[ar][i];
		i--;
		j++;
	}
/*	
	i = 0;
	while (b > 10)
	{
		str[i] = b % 10;
		b = b / 10;
		i++;		
	}
*/
}

/*
int	ft_check(char *argv)
{
	unsigned int c;

	if (typeof(argv[1]) != typeof(c))
	{
		write(1, "Error", 5);
		write(1, "\n", 1);
		return (1);
	}
	return (0);
}*/

int	main (int argc, char **argv)
{
	int nbr_str [11];
	int i = ft_strlen(argv[1]);
	
//	if (ft_check (argv[1]))
//		return (1);
	ft_to_nbr(argc, argv, nbr_str);
	while (i > 0)
	{
//		write(1, &nbr_str[i], 1);
//		printf("%d", nbr_str[i]);
		i--;
	}
	write(1, "\n", 1);
	ft_write(nbr_str);
	return (0);
}
