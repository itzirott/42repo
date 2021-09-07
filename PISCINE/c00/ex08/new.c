/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarribas <iarribas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 22:38:03 by iarribas          #+#    #+#             */
/*   Updated: 2021/04/23 19:42:56 by iarribas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_write (int *a, int n)
{
	int	i;
	char	c;

	i = 0;
	while (i <= n - 1)
	{
		c = a[i] + '0';
		write(1, &c, 1);
		i++;
	}
	if(a[0] < 10 - n)
	{
		write(1, &",", 1);
		write(1, &" ", 1);
	}
}

void	ft_increment (int *a, int n, int cont)
{
	while (a[n - cont] < 9)
	{
		a[n - cont]++;
		ft_write (a, n);
	}
}

void	ft_print_combn(int n)
{
	int	a[9];
	int	cont;
	int	i;

	cont = 1;
	a[0] = 0;
	while (a[0] <= 10 - n)
	{
		while (cont <= n - 1)
		{
			a[cont] = a[cont - 1] + 1;
			if (cont == n - 1)
			{
				printf("\ncont: %d",cont);
				while ( a[n-1] <= 9 )
				{
					ft_write (a, n);
					a[n-1]++;
				}
				a[cont]++;
				printf("\ncont: %d",cont);
				
			}

			cont++;
				printf("\ncont: %d",cont);

		}
		a[cont]++;

				printf("\ncont: %d",cont);
	}
}

int	main (void)
{
	ft_print_combn(3);
}
