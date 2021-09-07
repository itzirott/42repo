/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarribas <iarribas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 20:00:17 by iarribas          #+#    #+#             */
/*   Updated: 2021/04/26 19:04:59 by iarribas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha (char *str)
{
	int		i;
	int		result;

	i = 0;
	result = 1;
	while (str[i] != '\0')
	{
		if ((str[i] < 65 || str[i] > 122) || (str[i] > 90 && str[i] < 97 ))
		{
			result = 0;
		}	
		i++;
	}	
	if (i == 0)
		result = 1;
	return (result);
}
