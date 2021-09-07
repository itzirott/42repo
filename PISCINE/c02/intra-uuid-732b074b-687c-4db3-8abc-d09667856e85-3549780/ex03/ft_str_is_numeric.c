/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarribas <iarribas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 18:01:09 by iarribas          #+#    #+#             */
/*   Updated: 2021/04/26 19:04:26 by iarribas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric (char *str)
{
	int		i;
	int		result;

	i = 0;
	result = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 48 || str[i] > 57)
		{
			result = 0;
		}
		i++;
	}
	if (i == 0)
	{	
		result = 1;
	}
	return (result);
}
