/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarribas <iarribas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 15:27:18 by iarribas          #+#    #+#             */
/*   Updated: 2021/04/23 08:54:12 by iarribas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar (char c)
{
	write(1, &c, 1);
}

void	ft_number (char d1, char d2, char d3)
{
	ft_putchar(d1);
	ft_putchar(d2);
	ft_putchar(d3);
	if (d1 < '7')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}	

void	ft_print_comb (void)
{
	char	dig1;
	char	dig2;
	char	dig3;

	dig1 = '0';
	while (dig1 <='7')
	{
		dig2 = dig1 + 1;
		while (dig2 <= '8')
		{
			dig3 = dig2 + 1;
			while (dig3 <= '9')
			{
				ft_number(dig1, dig2, dig3);
				dig3++;
			}
			dig2++;
		}	
		dig1++;
	}
}

int	main (void)
{
	ft_print_comb();
}
