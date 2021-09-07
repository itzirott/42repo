/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarribas <iarribas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 19:51:19 by iarribas          #+#    #+#             */
/*   Updated: 2021/04/29 11:22:30 by iarribas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_operate (unsigned int size, unsigned int b, unsigned int b2)
{
	if (size <= b && size != 0)
	{
		b = b2 + size;
	}
	else if (size == 0)
		b = b2;
	else
	{
		b = b + b2;
	}
	return (b);
}

unsigned int	ft_count (char *array)
{
	unsigned int	i;

	i = 0;
	while (array[i] != '\0')
		i++;
	return (i);
}

unsigned int 	ft_strlcat (char *dest, char *src, unsigned int size)
{
	unsigned int		i;
	unsigned int		j;
	unsigned int		b;
	unsigned int		b2;

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
