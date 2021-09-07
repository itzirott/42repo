/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarribas <iarribas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 18:12:21 by iarribas          #+#    #+#             */
/*   Updated: 2021/05/06 10:16:17 by iarribas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	number;

	number = 1;
	if (nb > 0)
	{	
		while (number * number <= nb)
		{
			if (number * number == nb)
				return (number);
			else if (number >= 46341)
				return (0);
			number++;
		}
	}
	return (0);
}
