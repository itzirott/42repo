/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarribas <iarribas@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 20:22:01 by iarribas          #+#    #+#             */
/*   Updated: 2021/06/10 16:48:26 by iarribas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_numbers(long n)
{
	int		total;

	total = 1;
	while ((n / 10) > 0)
	{
		n = n / 10;
		total++;
	}
	return (total);
}

static char	*ft_if_zero (void)
{
	char	*str;

	str = (char *)malloc (sizeof (char) * 2);
	if (!str)
		return (NULL);
	str[1] = '\0';
	str[0] = '0';
	return (str);
}

static char	*ft_set_numb(char *str, long n, int total)
{
	str[total - 1] = '\0';
	total = total - 2;
	while (total >= 0 && n > 0)
	{
		str[total] = n % 10 + '0';
		n = n / 10;
		total--;
	}
	return (str);
}

char	*ft_itoa(int nb)
{
	char	*str;
	char	neg;
	int		total;
	long	n;

	n = (long) nb;
	neg = 0;
	if (n == 0)
		str = ft_if_zero ();
	else
	{	
		if (n < 0)
		{
			neg = 1;
			n = n * (-1);
		}
		total = ft_count_numbers(n) + neg + 1;
		str = (char *)malloc (sizeof (char) * total);
		if (!str)
			return (NULL);
		str = ft_set_numb(str, n, total);
		if (neg == 1)
			str[0] = '-';
	}
	return (str);
}
