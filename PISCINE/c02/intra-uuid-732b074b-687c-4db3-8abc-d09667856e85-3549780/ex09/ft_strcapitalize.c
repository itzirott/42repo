/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarribas <iarribas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 19:43:07 by iarribas          #+#    #+#             */
/*   Updated: 2021/04/26 20:50:56 by iarribas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase (char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 91 && str[i] > 64)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_findnoalpha(char *str, int i)
{
	if (str[0] < 123 && str[0] > 96 && i == 0)
	{
		str[0] = str[0] - 32;
	}	
	else if ((str[i] < 48 || str[i] > 122) || (str[i] > 90 && str[i] < 97 ))
	{
		i++;
		if (str[i] < 123 && str[i] > 96)
		{
			str[i] = str[i] - 32;
		}
	}
	else if (str[i] > 57 && str[i] < 65)
	{
		i++;
		if (str[i] < 123 && str[i] > 96)
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}

char	*ft_strcapitalize (char *str)
{
	int		i;

	i = 0;
	str = ft_strlowcase (str);
	while (str[i] != '\0')
	{
		str = ft_findnoalpha(str, i);
		i++;
	}	
	return (str);
}
