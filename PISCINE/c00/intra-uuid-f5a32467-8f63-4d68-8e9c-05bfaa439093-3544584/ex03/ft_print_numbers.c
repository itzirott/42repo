/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarribas <iarribas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 15:22:03 by iarribas          #+#    #+#             */
/*   Updated: 2021/04/19 15:22:06 by iarribas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers (void)
{
	char	numbers;

	numbers =48;
	while (numbers <=57)
	{
		write(1, &numbers, 1);
		numbers++;
	}
}
