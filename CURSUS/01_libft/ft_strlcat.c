/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarribas <iarribas@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 15:46:57 by iarribas          #+#    #+#             */
/*   Updated: 2021/05/31 18:35:25 by iarribas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_operate (unsigned int s, unsigned int b, unsigned int b2)
{
	if (s <= b && s != 0)
	{
		b = b2 + s;
	}
	else if (s == 0)
		b = b2;
	else
	{
		b = b + b2;
	}
	return (b);
}

static size_t	ft_count (const char *ar)
{
	size_t	i;

	i = 0;
	while (ar[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	int		j;
	size_t	b;
	size_t	b2;

	b = ft_count(dest);
	i = b;
	b2 = ft_count(src);
	j = b2;
	j = 0;
	while (src[j] != '\0' && j + b + 1 < size)
	{
		if (size > i)
			dest[i] = src[j];
		i++;
		j++;
	}
	b = ft_operate (size, b, b2);
	dest[i] = '\0';
	return (b);
}
