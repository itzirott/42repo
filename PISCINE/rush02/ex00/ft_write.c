#include <unistd.h>
#include <stdio.h>

void	ft_write(int *nbr)
{
	int i;

	i = 10;
	nbr[i] = nbr[i] + '0';
	printf("%c", nbr[10]);
//	write(1, &nbr[9], 1);
	printf(" billions ");
	i--;
	
	while (i > 6)
	{
		nbr[i] = nbr[i] +'0';
		if (nbr != 0)
//			write (1, &nbr[10 - i], 1);
			printf("%c", nbr[i]);
		i--;
	}
	printf(" millions ");
	while (i > 3)
	{
		nbr[i] = nbr[i] +'0';
		if (nbr != 0)
//			write (1, &nbr[8 - i], 1);
			printf("%c", nbr[i]);
		i--;
	}
	printf(" thounsands and ");
	while (i > 0)
	{
		nbr[i] = nbr[i] +'0';
		if (nbr != 0)
//			write (1, &nbr[9 - i], 1);
			printf("%c", nbr[i]);
		i--;
	}	

	
}
