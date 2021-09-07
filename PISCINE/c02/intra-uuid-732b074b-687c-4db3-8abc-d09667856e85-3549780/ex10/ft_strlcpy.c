/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarribas <iarribas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 16:44:47 by iarribas          #+#    #+#             */
/*   Updated: 2021/04/27 16:59:05 by iarribas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy (char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	srcsize;

	i = 0;
	srcsize = 1;
	while (src[i] != '\0' && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
		srcsize++;
	}
	dest[i] = '\0';
	return (srcsize);
}
