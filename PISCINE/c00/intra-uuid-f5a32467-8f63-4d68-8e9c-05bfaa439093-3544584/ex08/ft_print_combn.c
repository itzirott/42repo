/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarribas <iarribas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 22:38:03 by iarribas          #+#    #+#             */
/*   Updated: 2021/04/22 22:42:32 by iarribas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
	write(1, &",", 1);
	write(1, &" ", 1);
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

	cont = 0;
	while (n - cont >= 0)
	{
		a[cont] = cont;
		cont++;
	}
	ft_write(a, n);
	while (a[n - cont] < 10 - n)
	{
		cont = 2;
		ft_increment(a, n, 1);
		a[n - 1] = 0;
		a[n - cont]++;
		a[n - 1] = a[n - cont] + 1;
		ft_write (a, n);
	}
}
