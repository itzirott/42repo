/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarribas <iarribas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 12:19:11 by iarribas          #+#    #+#             */
/*   Updated: 2021/05/03 20:07:35 by iarribas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi (char *str)
{
	int	number;
	int	i;
	int	minus;

	i = 0;
	while ((str[i] != 0) && ((str[i] > 8 && str[i] < 14) || str[i] == 32))
		i++;
	minus = 0;
	while ((str[i] != 0) && (str[i] == '+' || str[i] =='-'))
	{
		if (str[i] == '-')
			minus++;
		i++;
	}
	number = 0;
	while ((str[i] != 0) && (str[i] > 47 && str[i] < 58))
	{
		number = (number * 10) + (str[i] - '0');
		i++;
	}
	if (minus % 2 != 0)
		number = number * (-1);
	return (number);
}
