/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarribas <iarribas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 08:20:43 by iarribas          #+#    #+#             */
/*   Updated: 2021/04/30 12:53:32 by iarribas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial (int nb)
{
	int	fac;

	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	fac = nb * ft_recursive_factorial(nb -1);
	return (fac);
}
