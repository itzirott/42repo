/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarribas <iarribas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 16:06:49 by iarribas          #+#    #+#             */
/*   Updated: 2021/04/22 16:59:16 by iarribas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar (char c)
{
	write(1, &c, 1);
}

void	ft_number (char d1, char d2, char d3, char d4)
{
	ft_putchar(d1);
	ft_putchar(d2);
	ft_putchar(' ');
	ft_putchar(d3);
	ft_putchar(d4);
	if (!(d1 == '9' && d2 == '8' && d3 == '9' && d4 == '9'))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	segundo_num (char dig1, char dig2, char dig3, char dig4)
{
	while (dig3 <= '9')
	{
		while (dig4 <= '9')
		{
			ft_number(dig1, dig2, dig3, dig4);
			dig4++;
		}
		dig4 = '0';
		dig3++;
	}
}

void	ft_print_comb2 (void)
{
	char	dig1;
	char	dig2;
	char	dig3;
	char	dig4;

	dig1 = '0';
	dig2 = '0';
	while (dig1 <='9')
	{
		while (dig2 <= '9')
		{
			dig3 = dig1;
			dig4 = dig2 + 1;
			segundo_num (dig1, dig2, dig3, dig4);
			dig2++;
		}
		dig2 = '0';
		dig1++;
	}	
}
