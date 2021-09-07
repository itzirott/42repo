/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarribas <iarribas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 18:12:41 by iarribas          #+#    #+#             */
/*   Updated: 2021/05/02 19:50:10 by iarribas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime (int nb)
{
	int	aux;
	int	mod;

	if (nb <= 1)
		return (0);
	else
	{
		aux = nb / 2;
		mod = 1;
		while ((mod != 0) && aux > 1)
		{
			mod = nb % aux;
			aux--;
		}
		if (aux == 1 && mod != 0)
			mod = 1;
		else
			mod = 0;
		return (mod);
	}
}
