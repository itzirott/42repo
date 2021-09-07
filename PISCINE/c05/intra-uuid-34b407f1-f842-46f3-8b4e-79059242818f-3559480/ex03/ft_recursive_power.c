/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarribas <iarribas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 12:47:48 by iarribas          #+#    #+#             */
/*   Updated: 2021/05/02 22:54:17 by iarribas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power (int nb, int power)
{
	int	number;

	if (power == 0)
		number = 1;
	if (power < 0)
		number = 0;
	if (power > 0)
		number = nb * ft_recursive_power (nb, power - 1);
	return (number);
}
