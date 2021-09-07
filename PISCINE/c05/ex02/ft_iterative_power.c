/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarribas <iarribas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 12:21:30 by iarribas          #+#    #+#             */
/*   Updated: 2021/04/30 12:54:27 by iarribas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power (int nb, int power)
{
	int	number;

	if (power < 0)
		return (0);
	number = 1;
	while (power > 0)
	{
		number = number * nb;
		power--;
	}
	return (number);
}
