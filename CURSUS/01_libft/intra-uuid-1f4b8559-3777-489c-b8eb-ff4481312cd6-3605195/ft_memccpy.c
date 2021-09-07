/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarribas <iarribas@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 18:24:52 by iarribas          #+#    #+#             */
/*   Updated: 2021/06/01 20:53:58 by iarribas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*dst1;
	unsigned char	*src1;
	size_t			i;

	i = 0;
	dst1 = (unsigned char *) dst;
	src1 = (unsigned char *) src;
	while (i < n)
	{
		dst1[i] = src1[i];
		if (src1[i] == (unsigned char) c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
