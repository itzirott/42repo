/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarribas <iarribas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 08:16:39 by iarribas          #+#    #+#             */
/*   Updated: 2021/04/30 10:37:07 by iarribas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial (int nb)
{
	int	fac;

	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	fac = 1;
	while (nb > 0)
	{
		fac *= nb;
		nb--;
	}
	return (fac);
}
