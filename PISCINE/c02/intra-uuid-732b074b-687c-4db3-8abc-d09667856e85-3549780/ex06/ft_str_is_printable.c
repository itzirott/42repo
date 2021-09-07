/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarribas <iarribas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 19:12:43 by iarribas          #+#    #+#             */
/*   Updated: 2021/04/26 19:15:46 by iarribas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable (char *str)
{
	int		i;
	int		result;

	i = 0;
	result = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 32)
		{
			result = 0;
		}
		i++;
	}
	if (i == 0)
		result = 1;
	return (result);
}
