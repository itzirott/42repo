/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarribas <iarribas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 18:11:42 by iarribas          #+#    #+#             */
/*   Updated: 2021/05/02 18:33:49 by iarribas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci (int index)
{
	int	number;

	if (index < 0)
		number = -1;
	if (index == 0)
		number = 0;
	if (index == 1 || index == 2)
		number = 1;
	if (index > 2)
		number = ft_fibonacci (index - 1) + ft_fibonacci (index - 2);
	return (number);
}
