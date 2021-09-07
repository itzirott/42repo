/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarribas <iarribas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 20:33:29 by iarribas          #+#    #+#             */
/*   Updated: 2021/04/21 16:05:02 by iarribas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab (int *tab, int size)
{
	int	i;
	int	j;
	int	n;

	i = 0;
	while (i <size)
	{
		j = i +1;
		while (j <size)
		{
			if (tab[i] >tab[j])
			{
				n = tab[j];
				tab[j] = tab[i];
				tab[i] = n;
			}
			j++;
		}
		i++;
	}
}
