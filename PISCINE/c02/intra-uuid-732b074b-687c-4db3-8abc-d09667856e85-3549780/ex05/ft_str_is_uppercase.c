/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarribas <iarribas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 19:08:54 by iarribas          #+#    #+#             */
/*   Updated: 2021/04/26 19:10:25 by iarribas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase (char *str)
{
	int		i;
	int		result;

	i = 0;
	result = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 65 || str[i] > 90)
		{
			result = 0;
		}
		i++;
	}
	if (i == 0)
		result = 1;
	return (result);
}
