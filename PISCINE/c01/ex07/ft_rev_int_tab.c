/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rv_int_tab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarribas <iarribas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 20:33:29 by iarribas          #+#    #+#             */
/*   Updated: 2021/04/21 15:45:42 by iarribas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab (int *tab, int size)
{
	int	i;
	int	n;

	i = 0;
	while (i < size /2 )
	{
		n = tab[i];
		tab[i] = tab[size - (1 + i)];
		tab[size - (1 + i)] = n;
		i++;
	}
}
