/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarribas <iarribas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 15:22:23 by iarribas          #+#    #+#             */
/*   Updated: 2021/04/19 15:22:26 by iarribas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative (int n)
{
	char	pos;
	char	neg;

	pos ='P';
	neg ='N';
	if (n <0)
	{
		write (1, &neg, 1);
	}
	else
	{
		write (1, &pos, 1);
	}
}
